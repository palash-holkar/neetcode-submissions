class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>m1;

        for(auto ch:s)
        {
            m1[ch]++;
        }

        for(auto ch:t)
        {
            m1[ch]--;
        }

        for(auto it:m1)
        {
            if( it.second != 0)
                return false;
        }
        return true;
        
    }
};
