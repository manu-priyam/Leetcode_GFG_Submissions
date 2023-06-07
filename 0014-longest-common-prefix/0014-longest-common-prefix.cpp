class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        sort(strs.begin(),strs.end());
        string s1 = strs[0], slast=strs[n-1];
        int s1size=s1.size();
        string res = "";
        for(int i = 0;i<s1size;i++){
            if(s1[i] == slast[i]) res+=s1[i];
            else break;
        }
        return res;
    }
};