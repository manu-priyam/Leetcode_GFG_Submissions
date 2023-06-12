class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int mid;

        //FFFTTTTT
        //First T
        //next element of the peak element
        if(nums[0] < nums[n-1]) return nums[0];
        int lo = 0, hi = n-1;
        while(lo<hi){
            mid = lo + (hi-lo)/2;
            if(nums[mid] < nums[0])
                hi = mid;
            else
                lo = mid+1;
        }
        //sanity check for if the array was not rotated and completely increasing
        // if(nums[lo] > nums[0]) return nums[0];
        return nums[lo];
    }
};