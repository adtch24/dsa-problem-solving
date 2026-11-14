class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=0;
        int start=0;
        double avg;
        double ans=INT_MIN;
        double sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            n++;
            
            if(i-start+1==k)
            {
                avg=sum/n;
                ans=max(ans,avg);
                sum-=nums[start];
                n--;
                start++;
            }
        }
        return ans;
    }
};