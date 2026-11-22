class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            int len=0;
            while(nums[i]>0)
            {
               len+=1;
               nums[i]=nums[i]/10;
            }
            if(len%2==0)
            {
                count++;
            }
        }
        return count;
    }
};