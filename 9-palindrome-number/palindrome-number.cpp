class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        if(x == 0) return true;
        int copy = x;
        double num;
        while(copy != 0){
            int digit = copy % 10;
            copy /= 10;
            num = num * 10 + digit;
        }
        if(num == x){
            return true;
        }
        return false;
    }
};