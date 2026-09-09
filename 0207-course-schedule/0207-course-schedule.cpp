class Solution {
public:
    bool detect(int node,vector<vector<int>> &adj,vector<bool>&path,vector<bool>&vis){
        path[node]=true;
        vis[node]=true;
        for(auto x:adj[node]){
            if(path[x]) return 1;
            if(vis[x]) continue;
            if(detect(x,adj,path,vis))return 1;
        }
        path[node]=false;
        return 0;
    }
    bool canFinish(int n, vector<vector<int>>& p) {
        vector<vector<int>> adj(n);
        for(auto x:p){
            int u=x[0];
            int v=x[1];
            adj[u].push_back(v);
        }        
        vector<bool> vis(n);
        vector<bool> path(n);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(detect(i,adj,path,vis)){
                    return false;
                }
            }
        }
        return true;
    }
};