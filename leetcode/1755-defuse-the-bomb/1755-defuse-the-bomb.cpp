class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>arr(code.size(),0);
        for(int i=0;i<code.size();i++)
        {
            int j=i;
            if(k>0)
            {
               while(j<abs(k)+i)
               {
                  arr[i]+=code[(j+1)%n];
                  j++;
               }
            }
            else if(k<0)
            {
                while(j>k+i)
                {
                arr[i]+=code[(j-1+n)%n];
                j--;
                }
            }
            else
            {
                arr[i]=0;
            }
        }
        return arr;
    }
};