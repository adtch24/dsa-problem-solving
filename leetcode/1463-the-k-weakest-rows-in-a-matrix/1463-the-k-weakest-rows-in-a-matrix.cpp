class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int>arr;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<mat.size();i++)
        {
           int j=0;
           int count=0;
           while( j<mat[i].size() && mat[i][j]!=0 )
           {
            if(mat[i][j]==1)
            {
                count++;
                j++;
            }
           }
           pq.push({count,i});
        }
        for(int i=0;i<k;i++)
        {
            arr.push_back(pq.top().second);
            pq.pop();
        }
        return arr;
    }
};