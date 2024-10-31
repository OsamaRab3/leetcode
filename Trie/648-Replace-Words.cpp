#include <string>
#include <vector>
using namespace std;

struct Node {
    Node* Links[26];
    bool flg = false;

    bool isContent(char ch) { return Links[ch - 'a'] != nullptr; }

    void put(char ch, Node* node) { Links[ch - 'a'] = node; }

    Node* get(char ch) { return Links[ch - 'a']; }

    void setEnd() { flg = true; }

    bool isEnd() { return flg; }
};

class Trie {
private:
    Node* root;

public:
    Trie() { root = new Node(); }

    void insert(string dic) {
        Node* node = root;
        int len = dic.length();
        for (int i = 0; i < len; i++) {
            if (!node->isContent(dic[i])) {
                node->put(dic[i], new Node());
            }
            node = node->get(dic[i]);
        }
        node->setEnd();
    }

    bool search(string word) {
        Node* node = root;
        int len = word.length();
        for (int i = 0; i < len; i++) {
            if (!node->isContent(word[i])) {
                return false;
            }
            node = node->get(word[i]);
        }
        return node->isEnd();
    }

    string findPrefix(string word) {
        Node* node = root;
        string prefix = \\;
        for (char ch : word) {
            if (node->isContent(ch)) {
                node = node->get(ch);
                prefix += ch;
                if (node->isEnd()) {
                    return prefix;
                }
            } else {
                break;
            }
        }
        return word;
    }
};

class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        Trie t;
        for (const string& word : dictionary) {
            t.insert(word);
        }

        string output = \\;
        string word = \\;
        for (char ch : sentence) {
            if (ch == ' ') {
                output += t.findPrefix(word) + \ \;
                word = \\;
            } else {
                word += ch;
            }
        }

        output += t.findPrefix(word);

        return output;
    }
};
