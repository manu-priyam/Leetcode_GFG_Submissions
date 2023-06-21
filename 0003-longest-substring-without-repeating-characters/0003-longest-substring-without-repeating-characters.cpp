class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        struct node{
            int val = -1;
        };
        int n = s.size();
        if(n==0) return 0;
        int l = 0,r=0;
        int maxlen = 0;
        unordered_map<char,node> m;
        for(r=0;r<n;r++){
            if(m[s[r]].val != -1){
                l=max(l,m[s[r]].val+1);
            }
            m[s[r]].val = r;
            maxlen = max(maxlen,r-l+1);
        }
      return maxlen;  
    }
};