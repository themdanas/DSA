class Solution {
    private:
        void dfs(int node, vector<int> &vis, stack<int> &st, vector<vector<int>> &adj ){
            vis[node]=1;
            for(auto it:adj[node]){
                if(!vis[it]) dfs(it,vis,st,adj);
            }
            st.push(node);
        }
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<int> vis(V, 0); 
        stack<int> st;
        
        vector<vector<int>> adj(V);
        for (auto &e : edges) {
            int u = e[0];
            int v = e[1];
            adj[u].push_back(v); 
        }
        
        for(int i=0; i<V; i++){
            if(!vis[i]){
                dfs(i,vis,st,adj);
            }
        }
        
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};