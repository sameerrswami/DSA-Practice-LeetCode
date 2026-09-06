class Solution {
public:
    void find(int row,int n,vector<vector<string>> &ans,vector<string> &Board,vector<bool>& column,vector<bool> &leftDg,vector<bool> &rightDg){
        if(row==n){
            ans.push_back(Board);
        }
        for(int j=0;j<n;j++){
            if(column[j]==0 && leftDg[row-j+n-1]==0 && rightDg[row+j]==0){
                rightDg[row+j]=1;
                leftDg[(row-j)+(n-1)]=1;
                column[j]=1;
                Board[row][j]='Q';
                find(row+1,n,ans,Board,column,leftDg,rightDg);
                rightDg[row+j]=0;
                leftDg[(row-j)+(n-1)]=0;
                column[j]=0;
                Board[row][j]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string>Board(n);
        vector<bool> rightDg((n*2)-1,0);
        vector<bool> leftDg((n*2)-1,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                Board[i].push_back('.');
            }
        }
        vector<bool> column(n,0);
        find(0,n,ans,Board,column,leftDg,rightDg);
        return ans;
    }
};