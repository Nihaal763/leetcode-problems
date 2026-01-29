class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int N = strs.size();
        int m = INT_MAX;
        int index = 0;
        for(int i = 0; i < N ; ++i){
            if(m > strs[i].length()){
                m = strs[i].length();
                index = i;
            }
        }
        string ans = strs[index];
        for(int j = 0; j < N ; ++j){
            string s = strs[j];
            int i = 0;
            while (i < ans.length() && i < s.length() && s[i] == ans[i]) {
                i++;
            }
            ans = ans.substr(0, i);
        }
        return ans;
    }
};