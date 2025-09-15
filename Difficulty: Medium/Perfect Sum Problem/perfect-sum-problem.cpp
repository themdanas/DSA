class Solution {
  public:
    int perfectSum(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        
        
        vector<vector<int>> dp(n+1,vector<int>(target+1,0));
        
        int i,j;
        
        for(int i=0; i<=n; i++) dp[i][0] = 1;
        //for(int j=0; j<=sum; j++) dp[0][j] = false;
        dp[0][0]=1;
        
        for(i=1; i<n+1; i++){
            for(j=0; j<target+1; j++){
               if(arr[i-1]<=j){
                   dp[i][j]=dp[i-1][j-arr[i-1]] + dp[i-1][j];
               } 
               else{
                   dp[i][j]=dp[i-1][j];
               }
            }
            
        }
        return dp[n][target];
    }
};