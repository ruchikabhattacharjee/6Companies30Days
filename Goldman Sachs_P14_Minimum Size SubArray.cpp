class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int l = 0;
        int len = INT_MAX;
        for(int r=0;r<nums.size();r++){
            sum = sum + nums[r];
            
            while(sum>=target && l<=r){
                len = min(len,r-l+1);
                sum = sum - nums[l];
                l++;
            }
        }
        if(len==INT_MAX){
            return 0;
        }
        else 
            return len;
    
    }
};
