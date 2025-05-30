// #include<bits/stdc++.h>
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int j=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i] == 0)
//             {
//                 int j=i;
//             }
    
//         }
//         for(int i=j+1;i<nums.size();i++)
//         {
//             if(nums[i] != 0)
//             {
//                 if(i!=j)swap(nums[i],nums[j]);
//                 j++;       
//             }
//         }
//        for(auto it : nums)
//        {
//             cout<<it;
//        }
//     }
// };


#include<bits/stdc++.h>
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
            vector<int> temp;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]!=0)
        {
            temp.push_back(nums[i]);
        }
    }

    for(int i=0;i<temp.size();i++)
    {
        nums[i]=temp[i];
    }

    for(int i=temp.size();i<nums.size();i++)
    {
        nums[i]=0;
    }

    for(auto it:nums)
    {
        cout<<it;
    }
  }
};
