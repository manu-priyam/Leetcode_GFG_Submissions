class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char> st;
        int n = s.size();
        unordered_map<char,int> m1; //to see if the character is already in the result or not
        unordered_map<char,int> m2; //to store the last index of occurrence of each character in the string
        for(int i = 0;i<n;i++) m2[s[i]] = i;
        for(int i = 0;i<n;i++) m1[s[i]] = 0;
        for(int i = 0;i<n;i++){
          if(m1[s[i]] == 1) continue;
          while(!st.empty() && st.top() > s[i] && i < m2[st.top()]){
            m1[st.top()] = 0;
            st.pop();
          }
          st.push(s[i]);
          m1[s[i]] = 1;
          
            
        }
        string res = "";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
        
    }
};