class Solution {
public:
    long maxSubArray(vector<int>& nums)
    {
        int N = nums.size();
        long sum = 0;
        long max = INT_MIN;

        for(int i=0;i<N;++i)
        {
            sum+=nums[i];
            if(sum>max)
            {
                max = sum;
            }
            if(sum<0)
            {
                sum=0;
            }
        }
       return max;
    }
};