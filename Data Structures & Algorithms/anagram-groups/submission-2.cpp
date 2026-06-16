class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // i can copy values, sort them and keep the sorted values as keys

        unordered_map<string, vector<string>> groups; 

        for(int i = 0; i < strs.size(); i++) {
            string sort = strs[i]; 
            std::sort(sort.begin(), sort.end()); 
            groups[sort].push_back(strs[i]);
        }
        vector<vector<string>> result; 
        for(auto pair : groups){
            result.push_back(pair.second); 
        }

        return result; 
    }
};
