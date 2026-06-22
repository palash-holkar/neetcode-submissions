class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

vector<int>ret(2,0);

        int l=numbers.size(),sum=0;

        for(int i=0,j = l-1;i<j;)
        {
            sum = numbers[i]+numbers[j];
            if( sum == target)
            {
                ret[0]=(i+1);
                ret[1]=(j+1);
                break;
            }
            else if(sum<target )
            {
                ++i;
            }
            else
            {
                --j;
            }
        }
        return ret;
        
    }
};
