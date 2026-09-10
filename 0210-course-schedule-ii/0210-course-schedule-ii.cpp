class Solution {
public:
    vector<int> ans;
    bool detect(int node,vector<vector<int>>&adj,vector<bool>&path,vector<bool>&vis){
        vis[node]=1;
        path[node]=1;
        for(auto x:adj[node]){
            if(path[x])return 1;
            if(vis[x]) continue;
            if(detect(x,adj,path,vis))return 1;
        }
        path[node]=0;
        ans.push_back(node);
        return 0;
    }
    vector<int> findOrder(int n, vector<vector<int>>& p) {
        vector<vector<int>> adj(n);
        for(auto x:p){
            adj[x[0]].push_back(x[1]);
        }
        vector<bool> path(n,0);
        vector<bool> vis(n,0);
        for(int i=0;i<n;i++){
            if(!vis[i] && detect(i,adj,path,vis)){
                return {};
            }
        }
        return ans;

    }
};