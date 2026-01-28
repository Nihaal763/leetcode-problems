class Solution {
public:
    int maxFreqSum(string s) {
        int N = s.length();
        map<char , int> m;
        int vc = 0;
        int cc = 0;
        for(int i = 0; i < N ;++i){
           m[s[i]]++;
        }
        for(auto x : m){
            if(x.first == 'a' || x.first == 'e' || x.first == 'i' || x.first == 'o' || x.first == 'u'){
                vc = max(vc , x.second);
            }
            else{
                cc = max(cc , x.second);
            }
        }
        return vc + cc;
    }
};