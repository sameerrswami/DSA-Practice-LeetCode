class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        int fc=0;
        queue<pair<int,int>> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1) fc++;
                if(grid[i][j]==2) q.push({i,j});
            }
        }
        int row[4]={1,-1,0,0};
        int col[4]={0,0,1,-1};
        int c=0;
        if(fc==0)return 0;
        while(!q.empty()){
            int size=q.size();            
            while(size--){
                auto[i,j]=q.front();
                q.pop();
                for(int k=0;k<4;k++){
                    int ni=i+row[k];
                    int nj=j+col[k];
                    if(ni>=0 && nj>=0 && ni<m && nj<n && grid[ni][nj]==1){
                        grid[ni][nj]=2;
                        q.push({ni,nj});
                        fc--;
                    }
                }
            }
            c++;
            if(fc==0) return c;
        }
        return -1;
    }
};