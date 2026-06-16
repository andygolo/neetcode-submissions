class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // hash set for keeping track of 
        unordered_set<int> numset;
        for(int i = 0; i < nums.size(); i++){
            if(numset.find(nums[i]) != numset.end() ){
                return true;
            }
            numset.insert(nums[i]);
        }
        return false;
    }
};