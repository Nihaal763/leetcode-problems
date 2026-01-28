class Solution {
public:
    int balancedStringSplit(string s) {
        int N = s.length();
        unordered_map<char , int> um;
        int count = 0;
        for(int i = 0; i < N; ++i){
            um[s[i]]++;
            if(i % 2 == 1){
                if(um['L'] == um['R']){
                  count++;
                }
            }
        }
        return count;
    }
};