class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int N = nums.size();
        vector<long>pf(N,0);
        long sum =0 ;
        for(int i=0;i<N;++i)
        {
          sum+=nums[i];
          pf[i]=sum;
        }
        unordered_map<long,int>freq;
        int c=0;
        freq[0]=1;
        for(int i=0;i<N;++i)
        {
            if(freq.find(pf[i]-k)!=freq.end())
            {
                c+=freq[pf[i]-k];
            }
            ++freq[pf[i]];
        }

        return c;
    }
};