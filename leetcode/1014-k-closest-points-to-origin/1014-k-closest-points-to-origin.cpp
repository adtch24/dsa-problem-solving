class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>arr;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<points.size();i++)
        {
           pq.push({points[i][0]*points[i][0]+points[i][1]*points[i][1],i});
        }
        
        int i=0;
        while(i<k)
        {
            int x=pq.top().second;
            arr.push_back(points[x]);
            pq.pop();
            i++;
        }
        return arr;
    }

};