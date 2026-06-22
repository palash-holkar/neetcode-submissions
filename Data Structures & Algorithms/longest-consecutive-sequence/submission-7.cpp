class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

 if(nums.empty())
             return 0;
set<int> s(nums.begin(),nums.end());
int length=0,max_length=0;

for(auto i:s)
{
    while(s.find(i+1)!=s.end())
    {
        ++length;
        ++i;
    }
    max_length = max(max_length,length);
    length=0;
}

// for(int i=0; i< nums.size();++i) //auto n:nums)
// {
//         if(m.find(nums[i])!=m.end())
//             continue; //skip duplicate


//         int j=i;
//         while(m.find(nums[j]<0?nums[j]+1:nums[j]-1)!=m.end() && j>=0)
//         {
//             cout<<" n is "<<nums[j]<<" for j "<<j<<endl;
//             if( nums[j] ==0)
//             {
//                 --j;
//                 continue;
//             }
            
//             m[nums[j]] = m[nums[j]-1] +1;
//               //  length =  m[nums[j]] ;
//               length++;
//                 --j;
//         }
//         //else
//         {
//             cout<<" length is "<<length<<endl;
//         ++m[nums[i]];    
//             max_length=max(max_length,length);
//             length=0;
//         }
        
//         cout<<"value of m[n] is "<<m[nums[i]]<<endl<<endl<<endl;
// }
//  max_length=max(max_length,length);
return max_length+1;


    //     int length=0,max_length=0;
    //     sort(nums.begin(),nums.end());
    //     if(nums.empty())
    //         return 0;

    //     for(int i=0;i<nums.size()-1;++i)
    //     {
    //         if(nums[i] == nums[i+1])
    //             continue;
    //         cout<<"nums i "<<nums[i]<<" i+1 is "<<nums[i+1]<<endl;
    //         if(nums[i] == (nums[i+1])-1)
    //         {
    //             ++length;
    //         }
    //        else
    //         {
    //             max_length=max(max_length,length);
    //             length=0;
    //         }
    //    }
    //     max_length=max(max_length,length);
    //    return max_length+1;
    }
};
