class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int N = nums.size();
        vector<int> ans(N,0);
        for(int i=0;i<N;++i)
        {
           ans[i] = pow(nums[i],2);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};