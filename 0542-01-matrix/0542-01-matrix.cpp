class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int,int>> q;
        int m=mat.size(),n=mat[0].size();
        for(int  i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0) q.push({i,j});
                else mat[i][j]=-1;
            }
        }
        int  d=1;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                int i=q.front().first;
                int j=q.front().second;
                q.pop();
                int row[4]={-1,1,0,0};
                int col[4]={0,0,-1,1};
                for(int k=0;k<4;k++){
                    int ni=i+row[k];
                    int nj=j+col[k];
                    if(ni<0 || nj<0 || ni>=m || nj>=n) continue;
                    if(mat[ni][nj]==-1){
                        mat[ni][nj]=d;
                        q.push({ni,nj});
                    }
                }
            }
            d++;
        }
        return mat;
    }
};