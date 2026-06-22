class Solution {
public:
    bool isalphanumeric(char ch)
    {
        if( (ch>='0' && ch <= '9') ||
            (ch>= 'a' && ch <= 'z') ||
            (ch>='A' && ch <='Z'))
            return true;
        return false;
    }
    bool isPalindrome(string s) {
        
        for(int i=0, j=s.length()-1;i<j;)
        {
            if( !isalphanumeric(s[i]))
            {
                ++i;
                continue;
            }
           if( !isalphanumeric(s[j]))
            {
                --j;
                continue;
            }
            cout<<" i is "<<s[i]<<" j is "<<s[j]<<endl;
            if(toupper(s[i])!=toupper(s[j]))
                return false;

                ++i;--j;
        }
        return true;
    }
};
