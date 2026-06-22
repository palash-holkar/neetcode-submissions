class Solution {
public:

    string encode(vector<string>& strs) {

string res;
        for (const string& s : strs) {
            res +=  to_string(s.size()) + "#"  + s;
           // res +=   s +",";
        }
       // return res;

        // string str{""};
        // for(string s:strs)
        // {
        //    // cout<<"s is "<<s<<endl;
        //     s = s + string(",");
        //     //str += std::to_string(s.length())+s;
        //     //str += s;
            
        //     //cout<<"str is "<<str<<"END \n";
        //     //cout<<"\n\n";

        //     str += s;
        // }

         cout<<"final string is "<<res<<endl;
        return res;

    }

    vector<string> decode(string s) {

        vector<string>str;

string sr;
int j=0;
        for(int i=0;i<s.length();++i)
        {
            cout<<" s[i] "<<s[i]<<"   ";
            j=i;
            while( s[i] != '#')
            {
                //sr.append(ch);
                //sr +=s[i];
                ++i;
            }
           // else
            {
                cout<< "substr is "<< s.substr(j,i-j)<<endl;
                int len = stoi(s.substr(j,i-j));
                cout<<"len is "<<len<<endl;
                i++; // skip #
                for(int k=0;k<len;++k)
                {
                    sr+=s[i++];
                    
                }
                cout<<"sr is "<<sr<<endl;
                str.push_back(sr);
                sr.clear();
                --i;
            }

        }

        // size_t loc=0;
        // auto next_loc = s.find('#');
        // cout<< next_loc <<endl;
        // int i=0;
        // while(next_loc != string::npos)
        // {
            
        //     auto substr = s.substr(loc,next_loc);
        //     cout<<"substr is "<<substr<<endl;
        //     loc = next_loc+1;
        //     auto next_loc = s.find('#');
        //     str.push_back(substr);
        //     cout<<"next_loc is "<<next_loc<<endl;
        //     ++i;
        //     if( i ==4)
        //         break;
            
        // }
    return str;

    }
};
