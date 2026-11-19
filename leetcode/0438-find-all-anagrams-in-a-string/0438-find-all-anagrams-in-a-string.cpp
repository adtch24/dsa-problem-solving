class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>arr;
        int start=0;
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(int i=0;i<p.size();i++)
        {
            mp2[p[i]]++;
        }
        for(int i=0;i<s.size();i++)
        {
            mp1[s[i]]++;
            if(i-start+1==p.size())
            {
            if(mp1==mp2)
            {
                arr.push_back(start);
            }
            mp1[s[start]]--;
            if(mp1[s[start]]==0)
            {
                mp1.erase(s[start]);
            }
            start++;
           }
        }
        return arr;
    }
};