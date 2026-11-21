class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int n=s.size();
        int j=0;
        string k;
        unordered_map<char,string>mp1;
        unordered_map<string,char>mp2;
        for(int i=0;i<pattern.size();i++)
        {
            k="";
            while(j<n && s[j]!=' ')
            {
                k+=s[j];
                j++;
            }
            if(k=="")
            {
                return false;
            }
            if(mp1.count(pattern[i]) && mp1[pattern[i]]!=k)
            {
                return false;
            }
            if(mp2.count(k) && mp2[k]!=pattern[i])
            {
                return false;
            }
            mp1[pattern[i]]=k;
            mp2[k]=pattern[i];
            j++;
        }
        while(j<n && s[j]==' ')
        {
            j++;
        }
        if(j<n)
        {
            return false;
        }
        return true;
    }
};