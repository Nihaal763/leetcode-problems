void rotate(int* nums, int numsSize, int k) {
    void reverseRange(int ar[],int m,int r)
    {
        int p1=m,p2=r;
        while(p1<p2)
        {
            int temp = ar[p1];
            ar[p1] = ar[p2];
            ar[p2] = temp;
            p1++;
            p2--;
        }
    }

    k = k%numsSize;
    reverseRange(nums,0,numsSize-1);
    reverseRange(nums,0,k-1);
    reverseRange(nums,k,numsSize-1);
    
}