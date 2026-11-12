class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>arr;
        priority_queue<pair<int,int>>pq;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto i:mp)
        {
            pq.push({i.second,i.first});
        }
        for(int i=0;i<k;i++)
        {
            int x=pq.top().second;
            arr.push_back(x);
            pq.pop();
        }
        return arr;
    }
};