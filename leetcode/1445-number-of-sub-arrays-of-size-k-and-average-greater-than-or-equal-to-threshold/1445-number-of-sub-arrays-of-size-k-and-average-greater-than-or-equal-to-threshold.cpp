class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int start=0;
        int avg;
        int count=0;
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            
            if(i-start+1==k)
            {
                avg=sum/k;
                if(avg>=threshold)
                {
                    count++;
                }
                sum-=arr[start];
                start++;
            }
        }
        return count;
    }
};