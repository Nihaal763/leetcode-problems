class Solution {
public:
    int countPrimes(int n)
    {
        vector<bool> ans(n, true); 
        if (n > 0)
        {
            ans[0] = false; 
        } 
            
        if (n > 1) 
        {
            ans[1] = false; 
        }
        for(int i=2;i*i<n;++i) 
        {
            if(ans[i])
            {
                for(int j=i*i;j<n;j+=i)
                {
                    ans[j] = false;
                }
            }
        }

        int count=0; 
        for(int i=2;i<n;++i)
        {
            if(ans[i])
            {
                ++count;
            }
        }
        return count;
    }
};
