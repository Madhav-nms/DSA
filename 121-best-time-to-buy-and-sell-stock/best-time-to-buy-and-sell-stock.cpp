class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int min_price = prices[0];
        for (int i = 0; i < prices.size(); i++){
            if (prices[i] < min_price){
                min_price = prices[i];
            }
            else {
               int max_price = prices[i] - min_price;
                if(max_price > max_profit) {
                    max_profit = max_price;
                }
            }
        }
        return max_profit;
    }
};