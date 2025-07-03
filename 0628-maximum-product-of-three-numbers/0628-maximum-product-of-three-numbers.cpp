class Solution {
public:
    int maximumProduct(vector<int>& nums) {
         int N = nums.size();
         int product = 1;
        sort(nums.begin(),nums.end());
        int nc = 0;
        for(int i=0;i<N;++i)
        {
            if(nums[i]<0)
            {
                ++nc;
            }
        }
        if(nc>=2)
        {
            int ncp = nums[0]*nums[1]*nums[N-1];
            int pp = nums[N-1]*nums[N-2]*nums[N-3];
            if(ncp>pp)
            {
                return ncp;
            }
            else
            {
                return pp;
            }
        }
        else
        {
            product = nums[N-1]*nums[N-2]*nums[N-3];
        }
        return product;
    }
};