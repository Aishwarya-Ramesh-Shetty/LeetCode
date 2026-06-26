class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> hash;

    for(int i=0;i<nums.size();i++){
        hash[nums[i]]++;
    }

    for(auto it : hash){
        if(it.second > 1){
            return true;
        }
    }
    return false;
    }
};