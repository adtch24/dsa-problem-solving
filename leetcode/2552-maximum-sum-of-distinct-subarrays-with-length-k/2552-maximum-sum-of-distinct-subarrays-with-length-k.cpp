class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n= nums.size();
        unordered_map<int,int>mp;
        int start=0;
        long long ans=0;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            mp[nums[i]]++;
            if(i-start+1==k )
            {
              if(mp.size()==k)
              {
              ans=max(ans,sum);
              sum-=nums[start];
              mp[nums[start]]--;
               if(mp[nums[start]]==0)
             {
                mp.erase(nums[start]);
             }
            start++;
              }
            else
            {
             sum-=nums[start];
             mp[nums[start]]--;
             if(mp[nums[start]]==0)
             {
                mp.erase(nums[start]);
             }
             start++;
            }
         }
        }
        return ans;
    }
};