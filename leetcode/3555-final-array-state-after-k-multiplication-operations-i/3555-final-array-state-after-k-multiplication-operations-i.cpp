class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<nums.size();i++)
        {
            pq.push({nums[i],i});
        }
        for(int i=0;i<k;i++)
        {
            int m=pq.top().first*multiplier;
            int n=pq.top().second;
            nums[n]=m;
            pq.pop();
            pq.push({m,n});
        }
        return nums;
    }
};