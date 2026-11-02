class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==0)
        {
            return true;
        }
        long long x=num;
        long long a=num;
        while(a*a>x)
        {
            a=(a+x/a)/2;
        }
        if(a*a==x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};