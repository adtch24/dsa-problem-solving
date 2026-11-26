class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int low=0;
        int high=n;
        vector<int>arr(2*n);
        for(int i=0;i<2*n;i++)
        {
           
            if(i%2==0)
            {
                
                arr[i]=nums[low];
                low++;
            }
            else
            {
                arr[i]=nums[high];
                high++;
            }
        }
        return arr;
    }
};