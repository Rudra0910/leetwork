class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price=INT_MAX;
        int difference=0;
            for(int i=0;i<prices.size();i++){
                min_price=min(min_price,prices[i]);
                difference=max(difference,prices[i]-min_price);
            }
            return difference;
            
    }
};