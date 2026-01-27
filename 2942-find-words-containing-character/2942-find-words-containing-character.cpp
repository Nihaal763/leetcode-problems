class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int N = words.size();
        vector<int> ans;
        for(int i = 0; i < N; ++i){
            string s = words[i];
            for(int j = 0 ; j < s.length(); ++j){
                if(s[j] == x){
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};