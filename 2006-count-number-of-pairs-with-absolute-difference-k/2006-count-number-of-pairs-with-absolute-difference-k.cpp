class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int N = nums.size();
        unordered_map<int,int> freq;
        int count = 0;
        for(int i=0;i<N;++i)
        {
            if(freq.find(nums[i]-k)!=freq.end())
            {
                count+=freq[nums[i]-k];
            }
            if(freq.find(nums[i]+k)!=freq.end())
            {
                count+=freq[nums[i]+k];
            }
            ++freq[nums[i]];
        }
        return count;
    }
};