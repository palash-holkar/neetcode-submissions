class Solution {
public:
    int search(vector<int>& nums, int target) {

        int l=0,r=nums.size()-1;
        int idx=-1;
        int mid =0;
        int pidx=0;
        int min1=nums[0];
        // while(l<=r)
        // {
        //     // if(nums[l]<nums[r]) // sorted array
        //     // {
        //     //     if(nums[l]<min1)
        //     //         pidx=l;
        //     //     break;
        //     // }

        //     // find pivot 
        //     mid = l + (r-l)/2;
        //     cout<<" mid is "<<mid<<" and value at mid is "<<nums[mid]<<endl;
        //     if( nums[mid] < min1)
        //     {
        //         min1 = nums[mid];
        //         pidx=mid; 
        //     }
        //      if( nums[l] <= nums[mid])
        //      {  // sorted part
        //         l=mid+1;
        //      }
        //      else
        //      {
        //         r=mid-1;
        //      }
        // }
        while(l<r)
        {
            int m = l + (r-l)/2;
            if( nums[m]> nums[r])
            {
                l=m+1;
            }
            else
            {
                r=m;
            }
        }
        pidx=l;
        cout<<" pivot point is "<<nums[pidx]<<endl;
        

        if( nums[pidx] == target)
            return pidx;

        if(target >= nums[pidx] && target <= nums[nums.size()-1])
        {
            //search in second part
            l=pidx;
            r=nums.size()-1;
        }
        else if(target <= nums[pidx-1] && target >= nums[0])
        {
            // search in first part
            l=0;
            r = pidx;
        }
        else
        {
            l=0;
            r=nums.size()-1;
        }
       
       cout<<"l is "<<l<<" and r is "<<r<<endl;

        while(l<=r)
        {
            mid = l +(r-l)/2;
            cout<<"mid is "<<mid<<endl;
            if( nums[mid]>target)
                r=mid-1;
            else if (nums[mid]<target)
                l=mid+1;
            else if( nums[mid] == target)
                return mid;
        }

        return -1;
        
    }
};
