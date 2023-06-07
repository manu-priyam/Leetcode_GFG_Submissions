class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int i;
        if(n==0) return 0;
        vector<int> dp(n+1,0);
        //Empty suffix array
        // dp[n]=0;

        // //Smallest suffix array - smallest subproblem
        // dp[n-1]=nums[n-1];

        // for(i=n-2;i>=0;i--){
        //     dp[i]=max(nums[i]+dp[i+2], dp[i+1]);
        // }
        if(n==1) return nums[0]; //to avoid runtime error
        dp[n-1]=nums[n-1];
        dp[n-2]=max(nums[n-2], nums[n-1]);
        for(i=n-3;i>=0;i--){
            dp[i]=max(nums[i]+dp[i+2], dp[i+1]);
        }
        return dp[0];
        
    }
};