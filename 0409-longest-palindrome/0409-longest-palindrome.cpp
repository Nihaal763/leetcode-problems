class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> freq;
        int N = s.length();
        for(int i=0;i<N;++i)
        {
            ++freq[s[i]];
        }
        int c=0;
        int hasodd = false;
        for(auto it:freq)
        {
            if((it.second)%2==0)
            {
                  c+=it.second;
            }
            else
            {
                c+=it.second-1;
                hasodd = true;
            }

        }
        if(hasodd)
        {
           ++c;
        }

        return c;
    }
};