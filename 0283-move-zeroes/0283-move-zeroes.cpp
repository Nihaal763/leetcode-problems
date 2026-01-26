class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        int N = nums.size();
        vector<int> ans;
        for(int i = 0; i < N ; ++i){
           if(nums[i] == 0){
            count++;
           }
           else{
            ans.push_back(nums[i]);
           }
        }
        for(int i = 0 ; i < ans.size() ; ++i){
            nums[i] = ans[i];
        }
        for(int i = N-1 ; i >= N-count ; --i){
            nums[i] = 0;
        }
        
    }
};