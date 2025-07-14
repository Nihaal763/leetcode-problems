class Solution {
public:
    int singleNonDuplicate(vector<int>& nums)
    {
      int N =  nums.size();
      if(nums[0]!= nums[1])
      {
        return nums[0];
      }
      if(nums[N-1]!=nums[N-2])
      {
        return nums[N-1];
      }
      int s = 0,e = N-1;

      while(s<=e)
      {
        int m = (s+e)/2;
        if(nums[m-1]!=nums[m] && nums[m]!=nums[m+1])
        {
            return nums[m];
        }
        if(nums[m-1]==nums[m])
        {
            m = m-1;
        }
        if(m%2==0)
        {
            s = m+2;
        }
        else
        {
            e =  m-1;
        }
      }
     return 0;    
    }
};