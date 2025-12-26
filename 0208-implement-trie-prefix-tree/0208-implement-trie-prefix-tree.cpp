#include <unordered_map>
using namespace std;

class Trie {
private:
    struct TrieNode{
        unordered_map<char,TrieNode*> hm;
        bool isEnd;
        TrieNode(){
            isEnd = false;
        }
    };
    
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* curr = root;
        int N = word.length();

        for(int i = 0; i < N; ++i){
            char ch = word[i];
            if(curr->hm.find(ch) == curr->hm.end()){
                curr->hm[ch] = new TrieNode();
            }
            curr = curr->hm[ch];
        }
        curr->isEnd = true;
    }
    
    bool search(string word) {
        TrieNode* curr = root;
        int N = word.length();

        for(int i = 0; i < N; ++i){
            char ch = word[i];
            if(curr->hm.find(ch) == curr->hm.end()){
                return false;
            }
            curr = curr->hm[ch];
        }
        return curr->isEnd;
    }
    
    bool startsWith(string prefix) {
        TrieNode* curr = root; 
        int N = prefix.length();

        for(int i = 0; i < N; ++i){
            char ch = prefix[i];
            if(curr->hm.find(ch) == curr->hm.end()){
                return false;
            }
            curr = curr->hm[ch];
        }
        return true;
    }
};


/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */