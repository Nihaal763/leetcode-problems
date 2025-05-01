int countKDifference(int* nums, int numsSize, int k) {
       int no_of_pairs=0;  
       for(int i=0;i<numsSize;++i)
       {
        for(int j=i+1;j<numsSize;++j)
        {
            if(nums[i]-nums[j]==k || nums[i]-nums[j]==-k)
            {
                 ++no_of_pairs;
            }
        }
       }

       return no_of_pairs;
}