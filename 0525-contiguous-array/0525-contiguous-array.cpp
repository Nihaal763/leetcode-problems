class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int N =nums.size();
        for(int i=0;i<N;++i)
        {
            if(nums[i]==0)
            {
                nums[i]-=1;
            }
        }
        vector<long>pf(N,0);
        long sum =0;
        for(int i=0;i<N;++i)
        {
           sum+=nums[i];
           pf[i]=sum;
        }
        int ans=0;
        unordered_map<long,int>freq;
        freq[0]=-1;
        for(int i=0;i<N;++i)
        {
            if(freq.find(pf[i])==freq.end())
            {
               freq[pf[i]]=i;
            }
            else
            {
                int l=i-freq[pf[i]];
                ans=max(ans,l);
            }
        }
        return ans;
    }
};