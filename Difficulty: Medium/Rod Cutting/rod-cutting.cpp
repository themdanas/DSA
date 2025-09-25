// User function Template for C++

class Solution {
  public:
    int cutRod(vector<int> &price) {
        // code here
        int n = price.size();
        vector<int> length(n);
        for (int i = 0; i < n; i++) {
        length[i] = i + 1;
        }
        
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        int i,j;
        
        for(i=1; i<=n; i++){
            for(j=1; j<=n; j++){
                if(length[i-1]<=j){
                    dp[i][j]=max(price[i-1]+dp[i][j-length[i-1]],dp[i-1][j]);
                }
                else{
                    dp[i][j]= dp[i-1][j];
                }
            }
        }
        
        return dp[n][n];
    }
};