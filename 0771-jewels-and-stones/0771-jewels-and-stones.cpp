class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int N = jewels.length();
        unordered_set<char> s;
        for(int i = 0; i < N; ++i){
           s.insert(jewels[i]);
        }
        int count = 0;
        int n = stones.length();
        for(int i = 0; i < n; ++i){
            if(s.find(stones[i]) != s.end()){
              count++;
            }
        }
        return count;
    }
};