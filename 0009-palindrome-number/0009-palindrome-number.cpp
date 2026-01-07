class Solution {
public:
    bool isPalindrome(int x) {
        if( x < 0){
            return false;
        }
        vector<int>ans;
        while(x > 0){
            ans.push_back(x % 10);
            x /= 10;
        }
        int N = ans.size();
        int s = 0;
        int e = N-1;
        while(s < e){
            if(ans[s] != ans[e]){
                return false;
            }
            s++;
            e--;
        }
        return true;
    }
};