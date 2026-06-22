class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

int length=0,max_length=0;
        sort(nums.begin(),nums.end());
        if(nums.empty())
            return 0;

        for(int i=0;i<nums.size()-1;++i)
        {
            if(nums[i] == nums[i+1])
                continue;
            cout<<"nums i "<<nums[i]<<" i+1 is "<<nums[i+1]<<endl;
            if(nums[i] == (nums[i+1])-1)
            {
                ++length;
            }
           else
            {
                max_length=max(max_length,length);
                length=0;
            }
       }
        max_length=max(max_length,length);
       return max_length+1;
    }
};
