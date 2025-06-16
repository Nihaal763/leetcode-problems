class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        int N=nums1.size();
        int M=nums2.size();
        unordered_map<int,int> freq;
        vector<int> ans;
        for(int i=0;i<N;++i)
        {
            freq[nums1[i]]=1;
        }
        for(int i=0;i<M;++i)
        {
            if(freq[nums2[i]]==1)
            {
                ans.push_back(nums2[i]);
                ++freq[nums2[i]];
            }
        }
             return ans;
    }
};