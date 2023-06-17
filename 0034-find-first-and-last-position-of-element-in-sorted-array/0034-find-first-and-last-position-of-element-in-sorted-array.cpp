class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> res;
        int lo, hi;
        lo = 0;
        hi = n-1;
        if(n==0) return {-1,-1};
        //Finding the first index of occurrence
        //FFFTTTTT
        //First T
        //P(X) : X >= target
        while(lo<hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid] >= target)
                hi = mid;
            else
                lo = mid + 1;
        }
        if(nums[lo] != target) return {-1,-1};
        res.push_back(lo);

        //Finding the last index
        //FFFTTTT
        //last F
        //P(X) : X > target
        lo = 0, hi = n-1;
        while(lo<hi){
            int mid = lo + (hi-lo+1)/2;
            if(nums[mid] > target)
                hi = mid - 1;
            else
                lo = mid;
        }
        res.push_back(lo);
        return res;
    }
};