class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int>mp;
        vector<int>ret_v;

        for(int i=0;i<nums.size();++i)
        {
            if(mp.find(target-nums[i]) != mp.end())
            {
                ret_v.push_back(mp.find(target-nums[i])->second);
                ret_v.push_back(i);
                return ret_v;
            }
            mp.insert(make_pair(nums[i],i));
        }
        return ret_v;
    }
};
