class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size();
        vector<int> dp(n,0);
        if(n==0) return 0;
        //smallest subproblem
        //Sj is the length of longest valid parenthesis chain ending at index j
        dp[0] = 0;
        int matchingIndex = 0;
        int maxLen = 0;

        for(int i = 1;i<n;i++){
            if(s[i] == '(')  //because this chain ending at j will never be valid
                dp[i] = 0;
            else{ //case where s[i] is ')'
                //Find the match
                matchingIndex = i - dp[i-1] - 1;
                if(matchingIndex >= 0 && s[matchingIndex] == ')'){
                    dp[i] = 0;
                }
                else if(matchingIndex >= 0){
                    dp[i] = 2 + dp[i-1];

                    //Now extend the chain
                    if(matchingIndex-1 >= 0){
                        dp[i] += dp[matchingIndex-1];
                    }
                }
            }
            maxLen = max(maxLen, dp[i]);
        }
        return maxLen;
        
    }
};