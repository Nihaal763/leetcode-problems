class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int min1 = 0,min2 = 0,i = 0;
        vector<int>c(n+m,0);
        while(min1<m && min2<n)
        {
            if(nums1[min1]>nums2[min2])
            {
                c[i] = nums2[min2];
                ++min2;
                ++i;
            }
            else
            {
                c[i] = nums1[min1];
                ++min1;
                ++i;
            }
        }

        while(min1<m)
        {
            c[i] = nums1[min1];
            ++min1;
            ++i;
        }

        while(min2<n)
        {
            c[i] = nums2[min2];
            ++min2;
            ++i;
        }
 
        for(int j=0;j<m+n;++j)
        {
            nums1[j] = c[j];
        }
    }
};