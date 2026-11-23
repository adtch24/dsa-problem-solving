class Solution {
public:
    bool checkString(string s) {
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a')
            {
            count++;
            }
        }
        int j=0;
        while(s[j]!='b' && j<s.size())
        {
            count--;;
            j++;
        }
        if(count==0)
        {
            return true;
        }
        return false;
    }
};