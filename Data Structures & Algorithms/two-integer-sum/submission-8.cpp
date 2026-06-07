class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> numsCopy;
        for(int i =0; i < nums.size(); i++){
            numsCopy.push_back({nums[i], i}); 
        }  

        sort(numsCopy.begin(), numsCopy.end());


        int left =0; int right = nums.size()-1; 

        while(left < right){
           if(numsCopy[left].first + numsCopy[right].first == target){
            return {min(numsCopy[left].second, numsCopy[right].second), max(numsCopy[left].second, numsCopy[right].second)};
           } else if (numsCopy[left].first + numsCopy[right].first < target){
             left ++; 
           }else{
            right --;
           }


        }
        return {};
    }
};
