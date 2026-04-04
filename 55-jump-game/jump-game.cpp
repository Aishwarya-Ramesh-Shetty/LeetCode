class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach = 0;

        for (int i = 0; i < nums.size(); i++) {
            // If current index is beyond reachable range → stuck
            if (i > maxReach) return false;

            // Update the farthest we can reach
            maxReach = max(maxReach, i + nums[i]);

            // If we can already reach last index
            if (maxReach >= nums.size() - 1) return true;
        }

        return true;
    }
};