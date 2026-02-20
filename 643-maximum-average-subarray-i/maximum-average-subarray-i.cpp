class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max_sum=0;
        if(nums.size()==1){
            
            return nums[0];
        }
        for(int i=0;i<k;i++){
            max_sum+=nums[i];
        }
        double window=max_sum;
        for(int i=k;i<nums.size();i++){
            window+=nums[i]-nums[i-k];
            max_sum=max(max_sum,window);
        }
        double avg = max_sum/k;
        return avg;
    }
};