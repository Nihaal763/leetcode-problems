class Solution {
public:
    bool isAnagram(string s, string t) {
        int N1 = s.length();
        int N2 = t.length();
        if(N1 != N2){
          return false;
        }
        map<char , int> m;
        for(int i = 0; i < N1 ; ++i){
           m[s[i]]++;
        }
        for(int i = 0; i < N2; ++i){
            if(m.find(t[i]) != m.end()){
                if(m[t[i]] > 0){
                    m[t[i]]--;
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        for(auto x : m){
            if( x. second > 0){
                return false;
            }
        }
        return true;
    }
};