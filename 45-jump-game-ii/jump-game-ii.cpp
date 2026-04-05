class Solution {
public:
    int jump(vector<int>& nums) {
        int maxReach = 0;
        int currentEnd=0;
        int count = 0;
        if(nums.size() == 1) return 0;
        for(int i=0;i<nums.size()-1;i++){
            maxReach = max(maxReach,i+nums[i]);
            if(i==currentEnd){
                count++;
                currentEnd = maxReach;
            }
        }
        return count;
    }
};