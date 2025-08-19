class Solution {
  public:
    // Function to find the shortest path from source to all other nodes
    vector<int> shortestPath(vector<vector<int>>& adj, int src) {
        // code here
        int N=adj.size();
        
        
        vector<int> dist(N, 1e9);
        dist[src]=0;
        queue<int> q;
        q.push(src);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it: adj[node]){
                if(dist[node] +1<dist[it]){
                    dist[it]= 1 + dist[node];
                    q.push(it);
                }
            }
        }
        vector<int> ans(N,-1);
        for(int i=0; i<N; i++){
            if(dist[i] !=1e9){
                ans[i]=dist[i];
            }
        }
        
        return ans;
    }
};