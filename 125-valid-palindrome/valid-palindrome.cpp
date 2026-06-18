class Solution {
public:
    bool recursionPalindrome(string &s, int left, int right) {
        if (left >= right) {
            return true;
        }

        if (!isalnum(s[left])) {
            return recursionPalindrome(s, left + 1, right);
        }

        if (!isalnum(s[right])) {
            return recursionPalindrome(s, left, right - 1);
        }

        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        return recursionPalindrome(s, left + 1, right - 1);
    }

    bool isPalindrome(string s) {
        return recursionPalindrome(s, 0, s.length() - 1);
    }
};