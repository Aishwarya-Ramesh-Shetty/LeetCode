class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;

    for(int i=0;i<nums.size();i++){
        int val = target - nums[i];
        if(hash.find(val)!=hash.end()){
            return{i,hash[val]};
        }
        hash[nums[i]] = i;
    }
    return {};
    }
};