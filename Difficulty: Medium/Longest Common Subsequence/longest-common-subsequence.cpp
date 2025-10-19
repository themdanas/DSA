class Solution {
  public:
    int lcs(string &s1, string &s2) {
        // code here
        int m = s1.size();
        int n = s2.size();
        
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        int i,j=0;

        for(i=1; i<=m; i++){
            for(j=1; j<=n; j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                    dp[i][j]=std::max(dp[i-1][j],dp[i][j-1]);
            }
        }
        
        return dp[m][n];
        
    }
};
