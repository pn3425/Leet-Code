class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int maxprofit = 0;
        for(int i=1;i<prices.size();i++)
        {
            int cost = prices[i] - mini;
            maxprofit = max(cost,maxprofit);
            mini = min(mini,prices[i]);
        }
        return maxprofit;
    }
};
