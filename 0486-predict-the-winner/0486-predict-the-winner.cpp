class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n));

        for (int i = 0; i < n; i++)
            dp[i][i] = nums[i];

        for (int len = 2; len <= n; len++) {
            for (int left = 0; left + len - 1 < n; left++) {
                int right = left + len - 1;

                dp[left][right] = max(
                    nums[left] - dp[left + 1][right],
                    nums[right] - dp[left][right - 1]
                );
            }
        }

        return dp[0][n - 1] >= 0;
    }
};