class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int count = 0;   
        int ele;
        for(int i=0;i<nums.size();i++)
        {
           if(count==0)
           {
               count = 1;
               ele = nums[i];     //Set ele
           }
           else if(nums[i] == ele)  //If element match, count++
           {
               count++;   
           }
           else{
               count--;  //if not, count--, and i++, so next ele
           }
        }
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == ele){
                cnt++;
            }
        }
        if(cnt > (nums.size()/2))
        {
            return ele;
        }
        return -1;
        
    }
};
