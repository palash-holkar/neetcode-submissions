class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length())
            return false;

        vector<int> f(26);
        vector<int> fs(26);

        for(auto ch: s)
        {
            f[ch-'a']++;
        }
        for(auto ch:t)
        {
            fs[ch-'a']++;
        }


    for(auto i='a'; i<='z';++i)
    {
        if( f[i-'a'] != fs[i-'a'])
        {
            cout<<"i="<<i<<" f[i]="<<f[i]<<" fs[i]="<<fs[i]<<endl;
            return false;
        }
    }
    return true;

        
    }
};
