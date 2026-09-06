class Solution {
public:
    bool row[9][10] = {}, col[9][10] = {}, box[9][10] = {};

    bool solve(vector<vector<char>>& board, int i, int j) {
        if(i == 9) return true;
        if(j == 9) return solve(board, i + 1, 0);
        if(board[i][j] != '.') return solve(board, i, j + 1);

        int b = (i / 3) * 3 + j / 3;

        for(int num = 1; num <= 9; num++) {
            if(!row[i][num] && !col[j][num] && !box[b][num]) {
                board[i][j] = num + '0';
                row[i][num] = col[j][num] = box[b][num] = true;

                if(solve(board, i, j + 1)) return true;

                board[i][j] = '.';
                row[i][num] = col[j][num] = box[b][num] = false;
            }
        }
        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j] != '.'){
                    int num = board[i][j] - '0';
                    int b = (i/3)*3 + j/3;
                    row[i][num] = col[j][num] = box[b][num] = true;
                }
            }
        }
        solve(board,0,0);
    }
};