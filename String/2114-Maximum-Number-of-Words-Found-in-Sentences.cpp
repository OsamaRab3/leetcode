class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int mx = 0;
        for (const string& s : sentences) {
            int countWords = 1;
            for (char c : s) {
                if (isspace(c)) {
                    countWords++;
                }
            }
            mx = max(mx, countWords);
        }

        return mx;
    }
};