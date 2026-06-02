class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp=prices[0];
        int maxpr=0;
        for(int i=0; i<prices.size(); i++){
            minp=min(minp,prices[i]);
            int maxpr3=prices[i]-minp;
            maxpr=max(maxpr3,maxpr);
            
        }
        return maxpr;
    }
};