class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int profit = 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i+=2){
            profit = profit + min(nums[i],nums[i+1]);
        }
        return profit;
    }
};