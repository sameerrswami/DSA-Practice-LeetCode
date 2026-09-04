class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        int top = 0, right = matrix[0].size()-1,left = 0, down = matrix.size()-1;
        while (top <= down && left <= right) {
            for (int i = left; i <= right; i++) {
                v.push_back(matrix[top][i]);
            }
            top++;
            for (int i = top; i <= down; i++) {
                v.push_back(matrix[i][right]);
            }
            right--;
            if (top <= down) {
                for (int i = right; i >= left; i--) {
                    v.push_back(matrix[down][i]);
                }
                down--;
            }
            if (left <= right) {
                for (int i = down; i >= top; i--) {
                    v.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return v;
    }
};