class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int>in;
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
        int num = nums[i];
        int more =  target-num;
        if(mpp.find(more) != mpp.end())
        {
          
            return{mpp[more],i};
            //return in;
        }
            mpp[num]=i;
        
        }
        return{-1,-1};
    }
   
};
