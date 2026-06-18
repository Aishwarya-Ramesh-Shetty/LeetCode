

class Solution {
public:

     long long RecursionPalindrome(int x, long long val){
        if(x == 0){
            return val;
        }

         long long digit = x % 10;
        x = x / 10;
        val = val * 10 + digit;
        return RecursionPalindrome(x, val);
    }


    bool isPalindrome(int x) {
        if(x < 0) return false;
        double val = 0;
         long long copy = x;
         long long num = RecursionPalindrome(x,val);
        if(num == copy){
            return true;
        }
        return false;
    }
};


