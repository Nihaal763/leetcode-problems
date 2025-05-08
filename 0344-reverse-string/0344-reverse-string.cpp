class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int p1 = 0;
        int p2 = n-1;

         while(p1<p2)
        {
            int temp = s[p1];
            s[p1] = s[p2];
            s[p2] = temp;
            p1++;
            p2--;
        }
    }
};