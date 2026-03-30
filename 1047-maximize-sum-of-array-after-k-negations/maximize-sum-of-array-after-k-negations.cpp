class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        // Flip negatives
        for(int i = 0; i < nums.size() && k > 0; i++){
            if(nums[i] < 0){
                nums[i] = -nums[i];
                k--;
            }
        }

        // Find smallest element
        int minIndex = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < nums[minIndex]){
                minIndex = i;
            }
        }

        // If k is odd → flip smallest
        if(k % 2 != 0){
            nums[minIndex] = -nums[minIndex];
        }

        // Compute sum
        int sum = 0;
        for(int x : nums){
            sum += x;
        }

        return sum;
    }
};