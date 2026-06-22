using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    // map<int,int,decltype([](int first,int second)
    // return first>second})> m;
vector<int>ret;

unordered_map<int,int> m;
//multimap<int,int>m2;
vector<vector<int>> v(nums.size()+1);
//set<int>m;

        for(auto n:nums)
        {
            m[n]++;
        }

        for(auto k:m)
        {
            v[k.second].push_back(k.first);
        }

auto it = v.rbegin();
        for(int i=0;i<k && it!= v.rend();++it)
        {
            vector<int> v = *it;
            for(auto n:v)
            {
                ret.push_back(n);
                ++i;
            }
        }

//         for(auto k:m)
//         {
//             m2.insert({k.second,k.first});
//             //m2[k.second]=k.first;
//         }

//         // traverse first k elements
// cout<<"m2 size "<<m2.size()<<endl;
// auto it=m2.rbegin();
//         for(int i=0;i<k && it!=m2.rend();++i)
//         {
//          //   cout<<*it<<" ";
//             ret.push_back(it->second);
//             ++it;
            
//         }
               
        return ret;
    }
};
