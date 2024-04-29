class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) // Negative numbers are not palindromes
            return false;

        std::string num = std::to_string(x);
        int l = num.size();
        for (int i = 0; i < l / 2; i++) {
            if (num[i] != num[l - i - 1])
                return false;
        }
        return true;
    }
};