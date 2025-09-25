class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n= coins.size();
        int INF = amount + 1; 

        vector<vector<int>> dp(n+1, vector<int>(amount+1, INF));
        int i,j;
        for (int i = 0; i <= n; i++) dp[i][0] = 0;    
        
        for(i=1; i<=n; i++){
            for(j=1; j<=amount; j++){
                if(coins[i-1]<=j){
                    dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
                }
                else{
                    dp[i][j]= dp[i-1][j];
                }
            }
        } 
        return dp[n][amount] > amount ? -1 : dp[n][amount];
    }
};