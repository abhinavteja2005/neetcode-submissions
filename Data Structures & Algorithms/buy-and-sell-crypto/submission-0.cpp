class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // buy low sell high :)
        int minPrice = prices[0];
        int profit = 0;
        for(auto price: prices){
            if(price < minPrice){
                minPrice = price;
            }else{
                profit = max(profit, price - minPrice);
            }
        }

        return profit;
    }
};
