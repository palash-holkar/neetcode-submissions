class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

unordered_map<string,vector<string>> result;
        for(const auto &s:strs)
        {
            string ss = s;
            std::sort(ss.begin(),ss.end());
            result[ss].push_back(s);            
        }

        vector<vector<string>> resf;
        for(auto &pair : result)
        {
            resf.push_back(pair.second);
        }
        return resf;
        
    }
};
