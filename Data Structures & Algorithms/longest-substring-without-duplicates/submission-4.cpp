class Solution {
public:
    int lengthOfLongestSubstring(string s) {

// if(s.empty())
//     return 0;
unordered_set<char>se;
        int m=0,l=0;
        for(int r=0;r<s.size();++r)
        {
            while(se.find(s[r])!=se.end())
            {
                se.erase(s[l]);
                ++l;
            }
            //else
            {
                se.insert(s[r]);
                        m = max(m,r-l+1);
            }
        }
            
      //  m = max(m,r-l+1);
        return m;
        
    }
};
