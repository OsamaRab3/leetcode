struct Node {
    Node* Links[26] = {nullptr};
    bool flg = false;

    bool contentKey(char ch) { return Links[ch - 'a'] != nullptr; }
    void put(char ch, Node* node) { Links[ch - 'a'] = node; }
    Node* get(char ch) { return Links[ch - 'a']; }
    void setEnd() { flg = true; }
    bool getEnd() const { return flg; }
};
class Trie {
private:
    Node* root;

public:
    Trie() { root = new Node(); }

    // void insert(string word) {
    //     Node* node = root;
    //     for (int i = 0; i < word.length(); i++) {
    //         if (!node->contentKey(word[i])) {
    //             node->put(word[i], new Node());
    //         }
    //         node = node->get(word[i]);
    //     }
    //     node->setEnd();
    // }
    void insert(string word) {
        Node* node = root;
        for (char ch : word) {
            if (!node->contentKey(ch)) {
                node->put(ch, new Node());
            }
            node = node->get(ch);
        }
        node->setEnd();
    }

    bool search(string word) {
        Node* node = root;
        for (int i = 0; i < word.length(); i++) {
            if (!node->contentKey(word[i])) {
                return false;
            }
            node = node->get(word[i]);
        }
        return node->getEnd();
    }

    bool startsWith(string prefix) {
        Node* node = root;
        for (int i = 0; i < prefix.length(); i++) {
            if (!node->contentKey(prefix[i])) {
                return false;
            }
            node = node->get(prefix[i]);
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