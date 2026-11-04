class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
    vector<int>arr(1001,0);
    int ans=INT_MIN;
    for(int i=0;i<trips.size();i++)
    {
      arr[trips[i][1]]+=trips[i][0];
      arr[trips[i][2]]-=trips[i][0];
    }
    for(int i=1;i<1001;i++)
    {
      arr[i]+=arr[i-1];
    }
    for(int i=0;i<1001;i++)
    {
      ans=max(ans,arr[i]);
    }
    if(ans<=capacity)
    {
        return true;
    }
    return false;
    }
};