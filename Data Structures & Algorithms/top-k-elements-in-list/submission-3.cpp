using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    // map<int,int,decltype([](int first,int second)
    // return first>second})> m;
vector<int>ret;

unordered_map<int,int> m;
multimap<int,int>m2;
//set<int>m;

        for(auto n:nums)
        {
            m[n]++;
        }

        for(auto k:m)
        {
            m2.insert({k.second,k.first});
            //m2[k.second]=k.first;
        }

        // traverse first k elements
cout<<"m2 size "<<m2.size()<<endl;
auto it=m2.rbegin();
        for(int i=0;i<k && it!=m2.rend();++i)
        {
         //   cout<<*it<<" ";
            ret.push_back(it->second);
            ++it;
            
        }
               
        return ret;
    }
};
