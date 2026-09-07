class Solution {
public:
    vector<vector<int>> colorGrid(int m, int n, vector<vector<int>>& sources) {
        queue<pair<int, int>> q;
        vector<vector<int>> grid(m, vector<int>(n, 0));
        vector<vector<int>> dist(m, vector<int>(n, 1e9)); 
        for(auto &s : sources) {
            q.push({s[0], s[1]});
            grid[s[0]][s[1]] = s[2];
            dist[s[0]][s[1]] = 0;
        }
        int row[4] = {1, -1, 0, 0};
        int col[4] = {0, 0, -1, 1};
        while(!q.empty()){
            auto [i, j] = q.front();
            q.pop();
            for(int d = 0; d < 4; d++){
                int ni = row[d] + i;   
                int nj = col[d] + j;
                if(ni >= 0 && nj >= 0 && ni < m && nj < n){
                    if(dist[ni][nj] > dist[i][j] + 1) {
                        dist[ni][nj] = dist[i][j] + 1;
                        grid[ni][nj] = grid[i][j];
                        q.push({ni, nj});
                    }
                    else if (dist[ni][nj] == dist[i][j] + 1) {
                        grid[ni][nj] = max(grid[ni][nj], grid[i][j]);
                    }
                }
            }
        }
        return grid;
    }
};