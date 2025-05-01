bool check(int* nums, int numsSize) {
    
    int flag = 0;

    for(int i=0;i<numsSize;++i)
    {
        int temp=nums[0];
        for(int j=0;j<numsSize-1;++j)
        {
            nums[j]=nums[j + 1];
        }
        nums[numsSize-1]=temp;

        
        int count=0; 
        for(int k=0;k<numsSize-1;++k)  
        {
            if(nums[k]<=nums[k + 1])
            {
                ++count;
            }
        }

        if(count==numsSize - 1)  
        {
            flag = 1;
            break;
        }
    }

    if(flag)
    {
        return true;
    }
    else
    {
        return false;
    }
}
