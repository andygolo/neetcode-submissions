class Solution {
public:
        // length # str 
    string encode(vector<string>& strs) {
        if(strs.empty()) return "";
        string result; 
        for(string str : strs){
            result += to_string(str.size());
            result += "#";
            result += str; 
        }
        return result; 
    }

    vector<string> decode(string s) {
        vector<string> res; 
        if(s.empty()) return {};

        int i =0;
        while(i < s.size()) {
            int j =i; 
            while(s[j] != '#'){
                j++;
            }
            int length = stoi(s.substr(i, j -i));
            i = j +1; 
            j = i + length;
            res.push_back(s.substr(i, length));
            i = j;
        }

        return res;
        
    }
};
