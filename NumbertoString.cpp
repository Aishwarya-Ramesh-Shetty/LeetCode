class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";

        unsigned int n = num;   // handle negative numbers
        string result = "";

        while (n > 0) {
            int digit = n % 16;

            if (digit < 10) {
                result.push_back('0' + digit);
            } else {
                result.push_back('a' + (digit - 10));
            }

            n /= 16;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
