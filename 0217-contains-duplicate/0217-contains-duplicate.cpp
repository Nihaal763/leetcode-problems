class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int N =nums.size();
        unordered_map<int,int> freq;
        int flag = 0;
        for(int i=0;i<N;++i)
        {
            ++freq[nums[i]];
        }

        for(auto it:freq)
        {
            if((it.second)>=2)
            {
                ++flag;
            }
        }
        if(flag)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};