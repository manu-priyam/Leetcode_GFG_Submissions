class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        //FFFTTTT
        //First T
        //P(X) : X>=target
        int lo = 0, hi = n-1;
        while(lo<hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid] >= target)
                hi = mid;
            else
                lo = mid+1;
        }
        if((nums[lo] != target) && (target > nums[n-1])) return lo+1;
        if((nums[lo] != target) && (target < nums[0])) return 0;
        return lo;
        
    }
};