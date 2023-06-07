class Solution {
public:
    int climbStairs(int n) {
        //Bottom up approach
        //Solve the subproblems in an order

        //Structure of the table to store solutions of subproblems
        vector<int> dp(n+1,-1);

        dp[1] = 1;
        dp[0] = 1; //No of ways you can reach the top if you are already at the top is 1,  ie do not take any step
        for(int i = 2;i<=n;i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};