//SIMILAR LIKE KOKO BANANA
class Solution {
public:

    int findMax(vector<int>& nums){
        int maxi = INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi = max(nums[i],maxi);
        }
        return maxi;
    }

    long long func(vector<int>& nums,int div){
        long long ans = 0;
        for(int i=0;i<nums.size();i++){
            ans += ceil(nums[i] + div - 1) / div; // Written to prevent overflowing cases // Original : ceil(nums[i]/div)
        } 
        return ans;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = findMax(nums);
        while(low <= high){
            int mid = (low + high) / 2;
            if(func(nums,mid) <= threshold){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};
