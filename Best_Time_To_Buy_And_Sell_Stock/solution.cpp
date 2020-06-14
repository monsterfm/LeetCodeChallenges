class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum=0, maxProfit=0;
        
        if(prices.size()<=1)
            return 0;
        
        minimum= min(prices[0],prices[1]);
        for(int i =1; i<prices.size();i++)
        {
            minimum=min(minimum,prices[i]);
            maxProfit=max(maxProfit, prices[i]-minimum);
        }
        return maxProfit;
    }
};