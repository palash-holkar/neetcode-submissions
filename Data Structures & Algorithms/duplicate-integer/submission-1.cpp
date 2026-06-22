class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>map1;
        for(auto i:nums)
        {
            if(map1.find(i)!= map1.end())
            {
                return true;
            }
            map1.insert(i);
        }
        return false;

        
    }
};