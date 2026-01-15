class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int N = nums.size();
        for(int i = 0; i < N; ++i){
            if(nums[i] == 0)
              nums[i] = -1;
        }
        unordered_map<int,int> hm;
        int sum = 0;
        int ans = 0;
        for(int i = 0; i < N; ++i){
            sum += nums[i];
            if(sum == 0){
                ans = i + 1;
            }
            else if(hm.find(sum) != hm.end()){
                ans = max(ans , i - hm[sum]);
            }else{
                hm[sum] = i;
            }
        }

        return ans;
    }
};