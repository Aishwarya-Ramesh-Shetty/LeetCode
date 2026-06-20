class Solution {
public:

    bool PowerOFThree(int n,int x){
        long long val = 1;
        int num = x;
        while(num != 0){
            val *= 3;
            num--;
        }
        if(val > n){
            return false;
        }
        else if(val == n){
            return true;
        }
        return PowerOFThree(n,x+1);
    }

    bool isPowerOfThree(int n) {
        if(n <= 0){
            return false;
        }
        if(n == 1){
            return true;
        }
        int x = 1;
        return PowerOFThree(n,x);
    }
};