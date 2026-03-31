class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size() == 0) return 0;
        int maxLen = 1;
        int count =1;
        for(int i=1;i<nums.size();i++){
            if(nums[i] == nums[i-1]) continue;
            if(nums[i] == nums[i-1] + 1){
                count++;
            }
            else{
                count = 1;
            }
            maxLen = max(maxLen,count);
        }
        return maxLen;
    }
};