class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even=0;
        for(int num : nums){
            int digits = (num == 0) ? 1 : floor(log10(num)+1); 
            if(digits % 2 == 0){
                even++;
            }
        }
        return even;
    }
};