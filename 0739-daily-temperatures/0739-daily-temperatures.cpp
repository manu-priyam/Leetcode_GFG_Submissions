class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<int> s;
        vector<int> ans;
        for(int i = n-1;i>=0;i--){
            if(s.empty()) ans.push_back(0);
            else if(temperatures[s.top()] > temperatures[i]) ans.push_back(s.top()-i);
            else{
                while(!s.empty() && temperatures[s.top()] <= temperatures[i]){
                    s.pop();
                }
                if(s.empty()) ans.push_back(0);
                else ans.push_back(s.top()-i);
            }
            s.push(i);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};