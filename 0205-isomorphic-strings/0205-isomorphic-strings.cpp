class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int N1 = s.length();
        int N2 = t.length();
        if (N1 != N2) return false;

        map<char, char> m1; // s -> t
        map<char, char> m2; // t -> s

        for (int i = 0; i < N1; ++i) {
            if (m1.count(s[i]) && m1[s[i]] != t[i])
                return false;

            if (m2.count(t[i]) && m2[t[i]] != s[i])
                return false;

            m1[s[i]] = t[i];
            m2[t[i]] = s[i];
        }

        return true;
    }
};
