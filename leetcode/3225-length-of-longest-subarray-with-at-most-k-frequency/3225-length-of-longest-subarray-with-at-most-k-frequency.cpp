class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        long long start=0;
        long long ans=0;
        for(long long i=0;i<nums.size();i++)
        {
           mp[nums[i]]++;
           if(mp[nums[i]]<=k)
           {
             ans=max(ans,i-start+1);
           }
           else
           {
                while(nums[start]!=nums[i])
                {
                    mp[nums[start]]--;
                    start++;
                }
                mp[nums[start]]--;
                start++;
           }
        }
        return ans;
    }
};