class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<pair<int,int>>arr;
        for(int i=0;i<n;i++)
        {
            arr.push_back({intervals[i][0],intervals[i][1]});
        }
        sort(arr.begin(),arr.end());
        int st=arr[0].first;
        int ed=arr[0].second;
        vector<vector<int>>ans;
        for(int i=1;i<n;i++)
        {
           if(arr[i].first<=ed)
           {
            ed=max(ed,arr[i].second);
           }
           else
           {
            ans.push_back({st,ed});
            st=arr[i].first;
            ed=arr[i].second;
           }
        }
        ans.push_back({st,ed});
        return ans;
    }
};