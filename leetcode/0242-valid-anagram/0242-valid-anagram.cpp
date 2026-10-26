class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        {
            return false;
        }
       unordered_map<char,int>mp1;
       for(int i=0;i<s.size();i++)
       {
          mp1[s[i]]++;
       }
       for(int i=0;i<s.size();i++)
       {
         mp1[t[i]]--;
       }
       for(auto i:mp1)
       {
         if(i.second!=0)
         {
            return false;
         }
       }
       return true;
       
    }
};
