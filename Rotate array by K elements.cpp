class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
//         int cnt=0;
//         while(cnt<k)
//         {
//            int size = nums.size();
//            int temp[size];
//            for(int j=1;j<size;j++)
//            {
//                temp[j]=nums[j-1];
            
//           }
//             temp[0] = nums[size-1];
//         }
//         cnt++;
        k=k%nums.size();
         reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }     
};
