#include <algorithm>
class Solution {
public:
    int secondHighest(string s) {
        int N = s.length();
        vector <int> a;
        for(int i = 0; i < N ; ++i){
            char ch = s[i];
            if(s[i] >= '0' && s[i] <= '9'){
               a.push_back(s[i] - '0');
            }
        }
        sort(a.begin(),a.end());
        int n = a.size();
        if(n < 2)return -1;
        if(a[n-2] < a[n-1]){
            return a[n-2];
        }
        else{
            for(int i = a.size()-2; i >= 0; --i){
                if(a[i] != a[i+1]){
                    return a[i];
                }
            }
        }
        return -1;
    }
};