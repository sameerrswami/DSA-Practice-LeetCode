class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        queue<pair<int,int>> q;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0) q.push({i,j});
                else mat[i][j]=-1;
            }
        }
        int dist=0;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                int a=q.front().first;
                int b=q.front().second;
                q.pop();
                if(a+1<m && mat[a+1][b]==-1){
                    mat[a+1][b]=dist+1;
                    q.push({a+1,b});
                }
                if(a-1>=0 && mat[a-1][b]==-1){
                    mat[a-1][b]=dist+1;
                    q.push({a-1,b});
                }
                if(b+1<n && mat[a][b+1]==-1){
                    mat[a][b+1]=dist+1;
                    q.push({a,b+1});
                }
                if(b-1>=0 && mat[a][b-1]==-1){
                    mat[a][b-1]=dist+1;
                    q.push({a,b-1});
                }
            }
            dist++;
        }
        return mat;
    }
};