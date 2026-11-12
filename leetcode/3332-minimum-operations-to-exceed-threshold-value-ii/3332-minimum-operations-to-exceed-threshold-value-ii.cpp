class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>>pq;
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
        }
        int count=0;
        while(pq.top()<k)
        {
 
            long long x=pq.top();
            pq.pop();
            long long y=pq.top();
            pq.pop();
            long long sum=x*2+y;
            pq.push(sum);
            count++;
        }
        return count;
    }
};