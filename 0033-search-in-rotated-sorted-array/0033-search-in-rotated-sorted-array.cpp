class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0, hi = n-1, mid;
        // int ans;
        // if(nums[0] <= nums[n-1]){
        //     while(lo<hi){
        //         mid = lo + (hi-lo)/2;
        //         if(nums[mid] >= target) hi = mid;
        //         else lo = mid+1;
        //     }
        // }
        // else{
        //     while(lo<hi){
        //         mid = lo + (hi-lo)/2;
        //         if(nums[mid] <= nums[n-1]) hi = mid;
        //         else lo = mid+1;
        //     }
        // }
        while(lo<hi){
          mid = lo+(hi-lo)/2;
          if(nums[mid] == target){
            lo = mid;
            break;
          }
          else if(nums[mid] >= nums[lo]){
            if(nums[mid]>=target && nums[lo] <= target){
              hi = mid-1;
            }
            else lo = mid+1;
          }
          else{
            if(nums[mid]<=target && nums[hi] >= target){
              lo = mid+1;
            }
            else hi = mid-1;

          }
        }
           
        if(nums[lo] == target) return lo;
        return -1;
    }
};