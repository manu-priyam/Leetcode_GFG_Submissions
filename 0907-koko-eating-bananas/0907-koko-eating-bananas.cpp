class Solution {
public:
    int timeTakenforallbananas(vector<int>& piles, int speed){
        int time = 0;
        int n = piles.size();
        for(int i = 0;i<n;i++){
            time += ceil((double)piles[i]/speed);
        }
        cout<<time<<'\n';
        return time;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int lo = 1, hi = *max_element(piles.begin(), piles.end());
        while(lo<hi){
            int mid = lo + (hi-lo)/2;
            cout<<lo<<" "<<mid<<" "<<hi<<"\n";
            if(timeTakenforallbananas(piles,mid) <= h)
                hi = mid;
            else
                lo = mid+1;
        }
        if(timeTakenforallbananas(piles,lo) <= h) return lo;
        return -1;
    }
};