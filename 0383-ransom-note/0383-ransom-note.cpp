class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int N = ransomNote.length();
        int M = magazine.length();
        unordered_map<char,int> freq;
        for(int i=0;i<M;++i)
        {
           ++freq[magazine[i]];
        }
        for(int i=0;i<N;++i)
        {
            if(freq[ransomNote[i]]!=0)
            {
                --freq[ransomNote[i]];
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};