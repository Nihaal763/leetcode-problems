class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int N = nums.size();
        int count = 0;
        int ans = INT_MIN;
        for(int i = 0; i  < N ; ++i){
          if(nums[i] == 1){
            count++;
          }
          else{
            count = 0;
          }
          ans = max(count , ans);
        }
        return ans;
    }
};