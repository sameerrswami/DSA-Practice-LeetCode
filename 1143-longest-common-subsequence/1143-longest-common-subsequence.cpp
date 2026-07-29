class Solution {
public:

    // this is right but will give TLE 

    // int solve(string &text1, string &text2, int i, int j) {
    //     if(i == text1.size() || j == text2.size()) return 0;
    //     if(text1[i] == text2[j]) {
    //         return 1 + solve(text1, text2, i + 1, j + 1);
    //     }
    //     return max(
    //         solve(text1, text2, i + 1, j),
    //         solve(text1, text2, i, j + 1)
    //     );
    // }
    // int longestCommonSubsequence(string text1, string text2) {
    //     return solve(text1, text2, 0, 0);
    // }

    //now we would use a seprate dp table to store calculated value earlier
    int solve(string &text1, string &text2, int i, int j,vector<vector<int>>& dp) {
        if(i == text1.size() || j == text2.size())
            return 0;
        if(dp[i][j] != -1)
            return dp[i][j];
        if(text1[i] == text2[j]) {
            return dp[i][j] =
                1 + solve(text1, text2, i + 1, j + 1, dp);
        }
        return dp[i][j] = max(
            solve(text1, text2, i + 1, j, dp),
            solve(text1, text2, i, j + 1, dp)
        );
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return solve(text1, text2, 0, 0, dp);
    }
};