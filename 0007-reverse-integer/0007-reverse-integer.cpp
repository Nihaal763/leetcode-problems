class Solution {
public:
    int reverse(int x) {
        long long a = INT_MAX;
        long long c = INT_MIN;
        bool isNeg = false;
        if(x < 0){
            isNeg = true;
        }
        int ans;
        string s = to_string(x);
        int N = s.length();
        int p1 = 0;
        int p2 = N-1;
        while(p1 < p2){
            swap(s[p1] , s[p2]);
            p1++;
            p2--;
        }
        long long b = stoll(s);
        if(isNeg == false && b > a){
           return 0;
        }
        if(isNeg == true && -1*b < c){
            return 0;
        }
        else{
            if(isNeg)
            ans = -1*b;
            else
            ans = b;
        }
        return ans;
    }
};