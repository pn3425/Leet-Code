#include<bits/stdc++.h>
class Solution {
public:

    int findMax(vector<int>& piles){
        int maxi = INT_MIN;
        for(int i=0;i<piles.size();i++){
            maxi = max(piles[i],maxi);
        }
        return maxi;
    }

    long long func(vector<int>& piles, int hrs, int h){
        long long ans=0;
        for(int i=0;i<piles.size();i++){
             ans += (piles[i] + hrs - 1) / hrs; //ans += ceil((double)piles[i]/(double)hrs);
             if(ans > h) return ans;  // EARLY STOP (VERY IMPORTANT)
        }
        return ans;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = findMax(piles);
        while( low <= high){
            int mid = low + (high - low) / 2;
            int val = func(piles,mid,h);
            if(val <= h){
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }  
        return low;  
    }
};
