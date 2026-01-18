// Just identify the sorted half, from where it has been rotated and then apply BS according to those sections
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        long long low = 0;
        long long high = n-1;
        while(low <= high){
            long long mid = (low+high)/2;
            if(nums[mid] == target){
                return mid;
            }
        if(nums[low] <= nums[mid]){
            if(nums[low] <= target && target <= nums[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        } 
        else{
            if(nums[mid] <= target && target <= nums[high]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
      }
      return -1;
    }
};
