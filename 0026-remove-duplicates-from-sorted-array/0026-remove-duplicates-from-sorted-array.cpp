#include <set>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int N = nums.size();
        set<int>s;
        for(int i = 0; i < N; ++i){
           s.insert(nums[i]);
        }
        vector<int> ans;
        for(int x : s){
            ans.push_back(x);
        }
        for(int i = 0 ; i < ans.size(); ++i){
            nums[i] = ans[i];
        }   
        return ans.size();
    }
};