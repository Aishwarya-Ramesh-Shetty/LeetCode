class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int totalProfit = 0;
        int minValue = prices[0];
        int profit = 0;
        for(int i=0;i< prices.size();i++){
            minValue = min(minValue,prices[i]);
            profit = max(profit,prices[i]-minValue);
            if(profit!=0){
                totalProfit += profit;
                profit = 0;
                minValue = prices[i];
            }
        }
        return totalProfit;
    }
};