class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // seing the min price  ever seen 
        int minprice = prices[0];
        // seing max profit ever seen  see took the max profut is zero beacuse in that time we are nto doing the ttransction
        int maxProfit = 0;
        // checking the prices for the future days 
        for(int i = 1; i<prices.size();i++){
            //  find the profit
            int profit = prices[i]- minprice;
            // check  the max proft 
             maxProfit = max(maxProfit , profit);
            // chekc if n we founf the min rpice  then the curren ttr ptice to  chekc foir thaty 
             minprice = min(minprice, prices[i]);
 


        }
        return maxProfit;

        
    }
};
