class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
     vector<pair<int,int>>arr;
     for(int i=0;i<intervals.size();i++)
     {
        arr.push_back({intervals[i][1],intervals[i][0]});
     }
     sort(arr.begin(),arr.end());
     int n=intervals.size();
     int i=0;
     int j=1;
     int count=0;
     while(i<n && j<n)
     {
        if(arr[i].first>arr[j].second)
        {
            count++;
            j++;
        }
        else
        {
            i=j;
            j++;
        }
     }
     return count;
    }
};