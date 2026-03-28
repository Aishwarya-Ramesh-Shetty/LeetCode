class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minvalue = prices[0];
        int profit = 0;
        for(int i=0;i<prices.size();i++){
            minvalue = min(minvalue,prices[i]);
            profit = max(profit,prices[i]-minvalue);
        }
        return profit;
    }
};