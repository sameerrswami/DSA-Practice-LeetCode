class Solution {
public:
    void dfs(int i,vector<vector<int>> &adj,vector<bool>&vis){
        vis[i]=1;
        for(auto it:adj[i]){
            if(!vis[it]){
                dfs(it,adj,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& grid) {
        vector<vector<int>> adj(grid.size());
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<bool> vis(grid.size());
        int c=0;
        for(int i=0;i<vis.size();i++){
            if(!vis[i]){
                dfs(i,adj,vis);
                c++;
            }
        }
        return c;
    }
};