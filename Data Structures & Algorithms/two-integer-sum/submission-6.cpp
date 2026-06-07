class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // iterate through with number 1, iterate through all possible combinations N^2
        // sort then two pointer,  n lg n, but I need to return indices 

        for( int left = 0; left < nums.size()-1; left++){
            for(int right = left+1; right < nums.size(); right++) {
                if(nums[left] + nums[right] == target){
                    return {left, right};
                }
            }
        }
    }
};
