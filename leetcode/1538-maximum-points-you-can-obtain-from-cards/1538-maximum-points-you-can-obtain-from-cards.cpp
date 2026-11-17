
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int sum=0;
        int count=0;
        int i=0;
        while(i<k)
        {
           sum+=cardPoints[i];
           i++;        
        }
        int ans=sum;
        while(count<k)
        {
            sum-=cardPoints[i-1];
            sum+=cardPoints[n-1-count];
            ans=max(ans,sum);
            i--;
            count++;
        }
        return ans;
    }
};
