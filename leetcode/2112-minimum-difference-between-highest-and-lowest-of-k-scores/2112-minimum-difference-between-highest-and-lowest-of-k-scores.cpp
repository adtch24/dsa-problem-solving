class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=INT_MAX;
        for(int i=0;i<=nums.size()-k;i++)
        {
                int x=nums[i+k-1]-nums[i];
                ans=min(ans,x);
        }
        if(ans==INT_MAX)
        {
            return 0;
        }
        return ans;
    }
};