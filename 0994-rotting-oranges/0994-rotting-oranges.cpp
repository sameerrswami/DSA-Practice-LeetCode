class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        // used Multi source BFS in this means our bfs will start from multiple indexes at the same time
        int m=grid.size();
        int n=grid[0].size();
        int tt=0; //total time
        int fc=0; //fresh count
        queue<pair<int,int>> q;  //queue to store rotten oramges
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2) q.push({i,j}); //stored all rotten oranges as bfs will start from all oranges
                if(grid[i][j]==1) fc++; // fresh count track as we have to stop if all are rotten
            }
        }
        if(fc==0)return 0; // if no fresh then no bfs
        while(!q.empty()){ // start bfs 
            int size=q.size();
            while(size--){ // now we used this as we want to perform bfs on all the index presed inside it..
                int row=q.front().first;
                int col=q.front().second;
                q.pop();
                //checking all 4 directions
                if(col+1<n && grid[row][col+1]==1){  // right
                    grid[row][col+1]=2; 
                    q.push({row,col+1});  // pushed the freshly rotten oranges 
                    fc--;
                } 
                if(col-1>=0 &&grid[row][col-1]==1){ // left
                    grid[row][col-1]=2;
                    q.push({row,col-1});
                    fc--;
                }
                if(row+1<m && grid[row+1][col]==1){ // down
                    grid[row+1][col]=2;
                    q.push({row+1,col});
                    fc--;
                }
                if(row-1>=0 && grid[row-1][col]==1){ // up
                    grid[row-1][col]=2;
                    q.push({row-1,col});
                    fc--;
                }
            }
            tt++; // one minute added after every loop
            if(fc==0)return tt; // if no fresh orange then return total time
        }
        return -1; // if there was fresh remaining means the upper condtion didnt run so we have returned -1...
    }
};