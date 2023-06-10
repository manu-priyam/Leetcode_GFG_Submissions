class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int i=0;
        for(int j=0;j<n;j++){
            if(nums[j] != val){
                swap(nums[i],nums[j]);
                i++;
            }
        }
        return i;
        // int counter = 0;
        // for(int i=0;i<n;i++){
        //     if(nums[i]==val){
        //         counter++;
        //         for(int j=i;j<n-1;j++){
        //             nums[j] = nums[j+1];
        //         }
        //     }
        // }
        
        
    }
};