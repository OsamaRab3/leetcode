class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string s;
        for (const string& s:words){
            int l = 0, r = s.length() - 1;
            bool isPalindrome = true;
            while (l < r) {
                if (s[l] != s[r]) {
                    isPalindrome = false;
                    break;
                }

                l++;
                r--;
            }
            if (isPalindrome)
                 return s;
        }
      return "";
    }
};