int findMaxK(int* nums, int numsSize) {
    int maxelement = INT_MIN;
    int flag=0;

    for(int i=0;i<numsSize;++i)
    {
        for(int j=0;j<numsSize;++j)
        {
            if(nums[i]>maxelement && -1*nums[i]==nums[j])
            {
                maxelement = nums[i];
                flag = 1;
            }
        }
    }

    if(flag)
    {
        return maxelement;
    }
    else
    {
        return -1;
    }
}