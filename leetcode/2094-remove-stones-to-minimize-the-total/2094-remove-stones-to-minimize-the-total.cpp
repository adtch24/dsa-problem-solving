class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<pair<long long, int>>pq;
        for(int i=0;i<piles.size();i++)
        {
            pq.push({piles[i],i});
        }
        for(int i=0;i<k;i++)
        {
            int m=pq.top().second;
            long long val=pq.top().first - (pq.top().first)/2;
            pq.pop();
            pq.push({val,m});
        }
        long long sum=0;
        for(int i=0;i<piles.size();i++)
        {
            sum+=pq.top().first;
            pq.pop();
        }
        return sum;
    }
};