class Solution {
  public:
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n=arr.size();
        
        vector<vector<bool>> dp(n+1,vector<bool>(sum+1,false));
        
        int i,j;
        
        for(int i=0; i<=n; i++) dp[i][0] = true;
        //for(int j=0; j<=sum; j++) dp[0][j] = false;
        dp[0][0]=true;
        
        for(i=1; i<n+1; i++){
            for(j=1; j<sum+1; j++){
               if(arr[i-1]<=j){
                   dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
               } 
               else{
                   dp[i][j]=dp[i-1][j];
               }
            }
            
        }
        return dp[n][sum];
        
    }
};