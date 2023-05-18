class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
        int max_num = *max_element(nums.begin(), nums.end());
        vector<int> count(max_num+10), dp(max_num+10);
        
        for (int x : nums) count[x]++;
        
        dp[1] = count[1];
        dp[2] = max(count[1], count[2]*2);
        for (int i = 3; i <= max_num; i++) {
            dp[i] = max(dp[i-1], dp[i-2]+count[i]*i);
        }
        
        return dp[max_num];
    }
};