class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<matrix.size();i++)
        {
            int j=0;
            while(j<matrix.size())
            {
                pq.push(matrix[i][j]);
                j++;
            }
        }
        for(int i=0;i<k-1;i++)
        {
            pq.pop();
        }
        return pq.top();
    }
};