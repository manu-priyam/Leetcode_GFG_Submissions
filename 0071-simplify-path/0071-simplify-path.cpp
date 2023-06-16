class Solution {
public:
    string simplifyPath(string path) {
        string temp;
        stack<string> stk;
        stringstream ss(path); //used to split the string
        while(getline(ss,temp,'/')){
            if(temp=="" || temp==".") continue;
            if(temp==".." && !stk.empty()) stk.pop();
            else if(temp !="..") stk.push(temp);
        }
        string res="";
        while(!stk.empty()){
            res='/'+stk.top()+res;
            stk.pop();
        }
        return res==""?"/":res;
        
    }
};