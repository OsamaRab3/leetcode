class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int len = words.size();
        vector<int> ans;
        for (int i = 0; i < len; i++) {
            string s = words[i];
            for (int j = 0; j < s.length(); j++)
                if (x == s[j]) {
                    ans.push_back(i);
                    break;
                }
        }
        return ans;
    }
};