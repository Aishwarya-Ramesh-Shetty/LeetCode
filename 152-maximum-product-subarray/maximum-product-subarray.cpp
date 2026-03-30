class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = nums[0];
        int maxprod = nums[0];
        int minprod = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                swap(maxprod,minprod);
            }
            maxprod = max(nums[i],maxprod*nums[i]);
            minprod = min(nums[i],minprod*nums[i]);
            res = max(res,maxprod);
        }
        return res;
    }
};