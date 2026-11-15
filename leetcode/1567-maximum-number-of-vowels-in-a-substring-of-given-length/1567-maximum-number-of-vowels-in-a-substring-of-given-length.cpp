class Solution {
public:
    int maxVowels(string s, int k) {
        int start=0;
        int ans=INT_MIN;
        int count=0;
        string vowels="aeiou";
        for(int i=0;i<s.size();i++)
        {
            if(vowels.find(s[i])!=string::npos)
            {
                count++;
            }
            if(i-start+1==k)
            {
               ans=max(ans,count);
               if(vowels.find(s[start])!=string::npos)
               {
                count--;
               }
               start++;
            }
        }
        return ans;
    }
};