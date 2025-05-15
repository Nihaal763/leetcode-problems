class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
       int N = nums.size();
       double sum = 0;
       double average;
       for(int i=0;i<k;++i)
       {
         sum+=nums[i];
       }   
       double max = sum;
       int s=1,e=k;
       while(e<N)
       {
         sum = sum-nums[s-1]+nums[e];
         if(sum>max)
         {
            max=sum;
         }
         ++s;
         ++e;
       }
       average=max/k;
       return average;
    }
};