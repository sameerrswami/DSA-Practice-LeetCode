class Solution {
public:
    void dfs(vector<vector<char>>& grid,int i,int j){
        int m=grid.size()-1;
        int n=grid[0].size()-1;
        if(i<0 || j<0 || i>m || j>n) return ;
        if(grid[i][j]=='0') return ;
        grid[i][j]='0';
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j-1);
        dfs(grid,i,j+1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int c=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    dfs(grid,i,j);
                    c++;
                }
            }
        }
        return c;
    }
};