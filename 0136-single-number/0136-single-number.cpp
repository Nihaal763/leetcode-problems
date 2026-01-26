class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int N = nums.size();
        int ans = 0;
        for(int i = 0; i < N ; ++i){
           ans ^= nums[i];
        }
        return ans;
    }
};