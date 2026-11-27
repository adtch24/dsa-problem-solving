class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        unordered_map<int,int>mp1;
        for(auto it:mp)
        {
            mp1[it.second]++;
        }
        if(mp.size()==mp1.size())
        {
            return true;
        }
        return false;
    }
};