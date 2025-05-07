class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int total = 0;
        for(int i=0;i<n;++i)
        {
            total = total + nums[i];
        }
        int lsum=0,rsum=0,count=0;
        for(int i=0;i<n-1;++i) 
        {
            lsum += nums[i];                 
            int rsum = total - lsum;         
            if (((lsum - rsum) & 1) == 0) {  
                count++;
            }
        }
        return count;
    }
};