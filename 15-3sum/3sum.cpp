class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>>result;

        for(int first = 0;(first<(n-2))&&(nums[first]<=0);++first){
            if(first > 0 && nums[first]==nums[first-1]){
                continue;
            }

            int left = first+1;
            int right = n-1;
            while(left<right){
                int sum = nums[first]+nums[left]+nums[right];
                if(sum<0){
                    ++left;
                }
                else if(sum>0){
                   --right;
                }
                else{
                    result.push_back({nums[first],nums[left],nums[right]});
                    ++left;
                    --right;

                    while (left < right && nums[left] == nums[left - 1]) {
                        ++left;
                    }

                    // Skip duplicate values for the third number
                    while (left < right && nums[right] == nums[right + 1]) {
                        --right;
                    }
                }
            }
        }
        return result;
    }
};