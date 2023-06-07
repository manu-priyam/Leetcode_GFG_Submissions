class Solution {
public:
    int rob1(vector<int>& nums) {
        int n = nums.size();
        int i;
        if(n==0) return 0;
        vector<int> dp(n+1,0);
        if(n==1) return nums[0];
        dp[n-1]=nums[n-1];
        dp[n-2]=max(nums[n-2], nums[n-1]);
        for(i=n-3;i>=0;i--){
            dp[i]=max(nums[i]+dp[i+2], dp[i+1]);
        }
        return dp[0];
        
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        if(n==1) return nums[0];
        vector<int> v1(nums.begin(),nums.end()-1);
        vector<int> v2(nums.begin()+1, nums.end());
        int a = rob1(v1);
        int b = rob1(v2);
        return max(a,b);
        
    }
};