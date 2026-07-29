class Solution {
public:

    // if we wont use a dp table then it will give TLE 
    
    //now we would use a seprate dp table to store calculated value earlier

    int solve(string &text1, string &text2, int i, int j,vector<vector<int>>& dp) {
        if(i == text1.size() || j == text2.size()) return 0; // base case and have to stop if i and j exceeds the size of the string
        if(dp[i][j] != -1) return dp[i][j]; // if value is calculated earlier than we have to return that value
        if(text1[i] == text2[j]) { // if both chars are equal
        // we have to store that value into dp and also have to more both chars forward
            return dp[i][j] = 1 + solve(text1, text2, i + 1, j + 1, dp);
        }
        // if they are not equal then we will recurse in i+1 in one call and j+1 in other
        return dp[i][j] = max( // have to get the maximum  out of them
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