class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        int N =arr.size();
        unordered_map<int,int> freq;
        for(int i=0;i<N;++i)
        {
            ++freq[arr[i]];
        }
        int A = freq.size();
        unordered_set<int>ans;
       for(auto it:freq)
       {
        ans.insert(it.second);
       }
       int B = ans.size();

       return A==B;
    }
};