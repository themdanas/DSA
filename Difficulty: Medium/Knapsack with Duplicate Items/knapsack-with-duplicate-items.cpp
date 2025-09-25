// User function Template for C++

class Solution {
  public:
    int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        int n= val.size();
        
        /*int dp[n+1][W+1];
        int i,j;
        for(i=0; i<n+1; i++){
            for(j=0; j<W+1; j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                }
            }
        }
        */
        vector<vector<int>> dp(n+1,vector<int>(capacity+1,0));
        int i,j;
        
        for(i=1; i<=n; i++){
            for(j=1; j<=capacity; j++){
                if(wt[i-1]<=j){
                    dp[i][j]=max(val[i-1]+dp[i][j-wt[i-1]],dp[i-1][j]);
                }
                else{
                    dp[i][j]= dp[i-1][j];
                }
            }
        }
        
        return dp[n][capacity];
    }
    
};