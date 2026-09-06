class Solution {
public:
    bool find(vector<vector<char>>& board,int i,int j){
        if(i==9) return 1;
        if(j==9) return find(board,i+1,0);
        if(board[i][j]!='.') return find(board,i,j+1);
        for(int num=1;num<10;num++){
            if(check(board,i,j,num)){
                board[i][j]='0'+num;
                if(find(board,i,j+1)) return 1;
                board[i][j]='.';
            }
        }
        return 0;
    }
    bool check(vector<vector<char>>& board , int i,int j,int num){
        char c = '0'+num;
        for(int row=0;row<9;row++){
            if(board[row][j]==c) return 0;
        }
        for(int col=0;col<9;col++){
            if(board[i][col]==c) return 0;
        }
        int row=(i/3)*3,col=(j/3)*3;
        for(int a=row;a<row+3;a++){
            for(int b=col;b<col+3;b++){
                if(board[a][b]==c) return 0;
            }
        }
        return 1;
    }
    void solveSudoku(vector<vector<char>>& board) {
        find(board,0,0);
    }
};