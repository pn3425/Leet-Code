class Solution {
public:

int Bsearch(vector<int> &nums, int low, int high, int target)
{
        if(low > high) return -1;  //Base Condition
        int mid = (low + (high - low )/2);
        if(nums[mid] == target) return mid;
        else if( target > nums[mid]) return Bsearch(nums, mid+1, high, target);
        else return Bsearch(nums, low, mid-1, target);   
}
    int search(vector<int>& nums, int target) {
       return Bsearch(nums, 0, nums.size()-1, target);  
    }
};

// Self from striver

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n-1;
        while( low <= high){
            int mid = (low + high)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(target > nums[mid]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }  
    return -1;
    }
};
