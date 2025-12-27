class Solution {
private:
struct TrieNode{
    unordered_map<char,TrieNode *>hm;
    bool isEnd;
    TrieNode(){
        isEnd = false;
    }
};
 TrieNode* root ;
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        root = new TrieNode();
        int N = dictionary.size();
        for(int i=0;i<N;++i){
            TrieNode * curr = root;
            int sz = dictionary[i].size();
            string a = dictionary[i];
            for(int i=0;i<sz;++i){
                char ch = a[i];
                if(curr->hm.find(ch)==curr->hm.end()){
                    curr->hm[ch] = new TrieNode();
                }
                curr = curr->hm[ch];
            }
            curr->isEnd = true;
        }

        string ans = helper(root,sentence);
        return ans;
    }
    string helper(TrieNode* root, string sentence) {
        string ans = "";
        stringstream ss(sentence);
        string word;

        while(ss>>word) {
            TrieNode* curr = root;
            string prefix = "";
            bool replaced = false;

            for (int i=0;i<word.length();++i) {
                char ch = word[i];
                // path breaks → stop
                if (curr->hm.find(ch) == curr->hm.end()) {
                    break;
                }
                prefix += ch;
                curr = curr->hm[ch];
                // shortest root found → stop
                if (curr->isEnd) {
                    ans += prefix;
                    replaced = true;
                    break;
                }
            }

            // no root matched → keep original word
            if (!replaced) {
                ans += word;
            }

            ans += " ";
        }

        // remove trailing space
        ans.pop_back();
        return ans;
    }

};