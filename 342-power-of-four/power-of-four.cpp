class Solution {
public:

    bool PowerOfFour(int n,int x){
        long long val = 1;
        int num = x;
        while(num != 0){
            val *= 4;
            num--;
        }
        if(val > n){
            return false;
        }
        else if(val == n){
            return true;
        }
        return PowerOfFour(n,x+1);
    }

    bool isPowerOfFour(int n) {
        if(n <=0){
            return false;
        }
        if(n == 1){
            return true;
        }
        int x = 1;
        return PowerOfFour(n,x);
    }
};