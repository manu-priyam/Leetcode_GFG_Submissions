class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        int flag=0;
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i = 0;i<n;i++) pq.push(arr[i]);

        int x = pq.top();
        pq.pop();
        int diff = pq.top()-x;
        while(pq.size()>=2){
            int y = pq.top();
            pq.pop();
            if(pq.top()-y != diff){
                flag=1;
                break;
            }
        }
        if(flag==1) return false;
        return true;
        
    }
};