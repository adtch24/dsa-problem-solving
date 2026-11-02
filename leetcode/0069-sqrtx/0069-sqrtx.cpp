class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        long long n=x;
        long long a=x;
        while(a*a>n)
        {
            a=(a+n/a)/2;
        }
        return a;
    }
};