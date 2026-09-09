class Solution {
  public:
  
  bool cycle(vector<bool>&visit,int parent,vector<vector<int>>& adj,int node){
      
          visit[node]=1;
      
      for(int j=0;j<adj[node].size();j++){
          if(adj[node][j]==parent){
              continue;
          }
          if(visit[adj[node][j]]){
              return 1;
          }
          if(cycle(visit,node,adj,adj[node][j])){
              return 1;
          }
          
      }
      return 0;
      
  }
    bool isCycle(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);
                for (auto& edge : edges) {
                    adj[edge[0]].push_back(edge[1]);
                    adj[edge[1]].push_back(edge[0]);
                }
        // Code here
        vector<bool>visit(V,0);
        for(int i=0;i<V;i++){
            if(!visit[i] &&  cycle(visit,-1,adj,i)){
                return 1;
            }
        }
        return 0;
       
    }
};
