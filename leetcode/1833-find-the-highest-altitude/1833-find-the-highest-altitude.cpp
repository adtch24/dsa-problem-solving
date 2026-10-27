class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>sum(gain.size()+1,0);
        int maximum=0;
        for(int i=1;i<=gain.size();i++)
        {
            sum[i]=sum[i-1]+gain[i-1];
            if(sum[i]>maximum)
            {
                maximum=sum[i];
            }
        }
        return maximum;
    }
};