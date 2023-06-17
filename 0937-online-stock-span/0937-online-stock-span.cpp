class StockSpanner {
public:
    vector<int> v;
    stack<int> s; //to store index
    StockSpanner() {
        int k;
    }
    
    int next(int price) {
        int ans;
        v.push_back(price);
        if(s.empty()) ans = v.size();
        else if(v[s.top()] > price) ans = v.size()-s.top()-1;
        else{
            while(!s.empty() && v[s.top()] <= price) s.pop();
            if(s.empty()) ans = v.size();
            else ans = v.size()-s.top()-1;
        }
        
        s.push(v.size()-1);
        return ans;
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */