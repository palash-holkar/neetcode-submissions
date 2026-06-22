class Solution {
public:
    int search(vector<int>& nums, int target) {

        int min=0,max=nums.size(),mid=0;
int count=0;
        while(min<=max)
        {
            mid = (max+min)/2;
             cout<<"mid is "<<mid<<endl;
            if(nums[mid]<target)
                min=mid+1;
            else if(nums[mid]>target)
                max=mid-1;
            else
                return mid;
            
            cout<<"min "<<min<<" and max "<<max<<endl;
            if(count++>nums.size())
                break;

        }
        return -1;
        
    }
};
