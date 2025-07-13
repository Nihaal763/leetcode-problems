#include <vector>
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int N = nums.size();
        int s = 0,e = N-1,ans1 = -1,ans2 = -1;

        while(s<=e)
        {
            int m = (s+e)/2;
            if(nums[m]==target)
            {
                ans1 = m;
                e = m-1;
            }
            else if(nums[m]>target)
            {
                e = m-1;
            }
            else
            {
                s = m+1;
            }
        }
        
        s = 0;
        e = N - 1;

        while(s<=e)
        {
           int m = (s+e)/2;
           if(nums[m]==target)
           {
             ans2 = m;
             s = m+1; 
           }
           else if(nums[m]>target)
           {
              e = m-1;
           }
           else
           {
             s = m+1;
           }
        }
        vector<int> ans(2,-1);
        ans[0] = ans1;
        ans[1] = ans2;
        return ans;
    }
};