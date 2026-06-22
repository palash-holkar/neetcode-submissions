class Solution {
public:
    int findMin(vector<int> &nums) {

        int l=0,r=nums.size()-1;
        int m;
        int min1=nums[0];
        while(l<=r)
        {
           cout<<"l is "<<l<<" r is "<<r<<" and num[l] "<<nums[l]<<" and nums[r] "<<nums[r]<<endl;
            if(nums[l]<nums[r]) // entire array is sorted
            {
                if( nums[l]<min1)
                    min1 = nums[l];
                return min1;
            }
            // m=(l+r)/2;
            m = l +(r-l)/2;
            cout<<" m is "<<m<<endl;
            min1 = min(min1,nums[m]);

            if(nums[l]<=nums[m]) // sorted part
            {
                // go to second part
                l=m+1;                
            }
            else
            {
                // vortex must in un-sorted part
                
                r=m-1;
            }
        }
       return min1;
        
    }
};
