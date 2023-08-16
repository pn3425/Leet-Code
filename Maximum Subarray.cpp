class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxi=nums[0];
        
        for(int i=0;i<nums.size();i++)
        {
            //1
            sum=sum+nums[i];
            //2
            maxi=max(sum,maxi);
            
              //3
           if(sum<0)
          {
            sum=0;
          }
        }
       return maxi;
    }
};
