// https://leetcode.com/problems/number-of-longest-increasing-subsequence/description/?envType=study-plan-v2&id=dynamic-programming

class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
    
    int n=nums.size();

    if (n <= 1) return n;
    vector<int> dp(n,1);
    vector<int> cnt(n,1);
    int ans=0;

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(nums[i]>nums[j])
            {
                if (dp[i] < dp[j] + 1) 
                {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                } 
                else if (dp[i] == dp[j] + 1) 
                {
                    cnt[i] += cnt[j];
                }

            }
        }
        ans=max(ans,dp[i]);
    }

    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(dp[i]==ans)
        {
            sum+=cnt[i];
        }
    }

    return sum;

    }
};