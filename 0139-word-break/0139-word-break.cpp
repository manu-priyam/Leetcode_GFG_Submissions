class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        unordered_set<string> dict(wordDict.begin(), wordDict.end());
        vector<bool> dp(n,false); 
        string word = "";

        //smallest dubproblem
        dp[n-1] = dict.find(s.substr(n-1, 1)) == dict.end() ? false : true;

        for(int i = n-2;i>=0;i--){
            word = "";
            for(int j = i;j<n;j++){
                word+=s[j];

                //check if this word is in the dictionary
                //Not there, then continue to the next word
                if(dict.find(word) == dict.end()){
                    continue;
                }
                //if there, then check the dp[j+1]
                if(j+1 >= n || dp[j+1] == true){
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[0];
    }
};