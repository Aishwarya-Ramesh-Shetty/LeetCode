class Solution {
public:

    bool PowerOfTwo(int n,int x){
        long long val = 1;
        int num = x;
        while(num != 0){
            val *= 2;
            num--;
        }
        if(val > n){
            return false;
        }
        else if(val == n){
            return true;
        }
        return PowerOfTwo(n,x+1);
    }

    bool isPowerOfTwo(int n) {
        if(n == 1){
            return true;
        }
        int x = 1;
        return PowerOfTwo(n,x);
    }
};