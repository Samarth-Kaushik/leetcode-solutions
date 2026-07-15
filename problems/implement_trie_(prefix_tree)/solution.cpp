class TrieNode {
public:
    char data;
    TrieNode* children[26];
    bool isTerminal;
    
    TrieNode(char ch) {
        data = ch;
        for(int i = 0; i < 26; i++) {
            children[i] = nullptr;
        }
        isTerminal = false;
    }
};

class Trie {
public:
    TrieNode* root;
    
    Trie() {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode* root, const string& word, int i) {
        if(i == word.length()) {
            root->isTerminal = true;
            return;
        }
        
        int index = word[i] - 'a';
        if(root->children[index] == nullptr) {
            root->children[index] = new TrieNode(word[i]);
        }
        
        insertUtil(root->children[index], word, i + 1);
    }
    
    void insert(string word) {
        insertUtil(root, word, 0);
    }
    
    bool searchUtil(TrieNode* root, const string& word, int i) {
        if(i == word.length()) {
            return root->isTerminal;
        }
        
        int index = word[i] - 'a';
        if(root->children[index] == nullptr) {
            return false;
        }
        
        return searchUtil(root->children[index], word, i + 1);
    }
    
    bool search(string word) {
        return searchUtil(root, word, 0);
    }
    
    bool startsWithUtil(TrieNode* root, const string& prefix, int i) {
        if(i == prefix.size()) {
            return true; // Fixed logic: always true if we reach the end of the prefix
        }
        
        int index = prefix[i] - 'a';
        if(root->children[index] == nullptr) {
            return false;
        }
        
        return startsWithUtil(root->children[index], prefix, i + 1);
    }
    
    bool startsWith(string prefix) {
        return startsWithUtil(root, prefix, 0);
    }
};