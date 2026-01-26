class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N = nums.size();
        sort(nums.begin() , nums.end());
        int i;
        for(i = 0; i < N ; ++i){
            if(nums[i] != i){
                return i;
            }
        }
        return i;
    }
};