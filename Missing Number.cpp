class Solution {
public:
    int missingNumber(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int miss = 1;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i] == 1)
//             {
//                 return 0;
//             }
             
//             else if(nums[i] == miss )
//             {
//                 miss++;
//             }
//             return miss;
        
//         }
//         return miss;
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] != i)
            {
                return i;
            }
            
        }
        return nums.size();
    }
};
