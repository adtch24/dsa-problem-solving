class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long >pq;
        for(int i=0;i<gifts.size();i++)
        {
            pq.push(gifts[i]);
        }
        for(int i=0;i<k;i++)
        {
            long long root=sqrt(pq.top());
            pq.pop();
            pq.push(root);
        }
        long long sum=0;
        for(int i=0;i<gifts.size();i++)
        {
            sum+=pq.top();
            pq.pop();
        }
       return sum;
    }
};