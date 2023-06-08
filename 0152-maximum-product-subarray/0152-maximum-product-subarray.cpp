class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        vector<int> maxProd(n,0);
        vector<int> minProd(n,0);
        int res;
        //smallest subproblem
        maxProd[0] = minProd[0] = res = nums[0];

        for(int i = 1;i<n;i++){
            maxProd[i] = max(nums[i], max(nums[i]*maxProd[i-1], nums[i]*minProd[i-1]));
            minProd[i] = min(nums[i], min(nums[i]*maxProd[i-1], nums[i]*minProd[i-1]));
            res = max(res,maxProd[i]);
        }
        return res;
    }
};