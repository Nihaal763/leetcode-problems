class Solution {
public:
    char findTheDifference(string s, string t) {
        int N=s.length();
        int M=t.length();
        char a;
        unordered_map<char,int> freq;
        for(int i=0;i<N;++i)
        {
            ++freq[s[i]];
        }
        for(int i=0;i<M;++i)
        {
            ++freq[t[i]];
        }
        for(auto it:freq)
        {
            if((it.second)%2==1)
            {
                a=it.first;
                break;
            }
        }
        return a;
    }
};