class Solution {
public:

    int FirstOccurence(vector<int>& nums, int target){
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int first = -1;
        while(low <= high){
            int mid = (low+high)/2;
            if(nums[mid] == target){
                first = mid;
                high = mid - 1;
            }
            else if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    return first;
    }
    int LastOccurence(vector<int>& nums, int target){
      int n = nums.size();
        int low = 0;
        int high = n-1;
        int last = -1;
        while(low <= high){
            int mid = (low+high)/2;
            if(nums[mid] == target){
                last = mid;
                low = mid + 1;
            }
            else if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    return last;

    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = FirstOccurence(nums,target);
        int last = LastOccurence(nums,target);
        vector<int> ans;
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};
