class Solution {
public:
    int maxArea(vector<int>& heights) {

        int maxW =0,s=heights.size();
        int l,w;
        for(int i=0,j=s-1;i<j;)
        {
            w = j-i;
            l = min(heights[j], heights[i]);
            maxW = max(maxW,w*l);
            if( heights[i]<heights[j])
                i++;
            else
                j--;

        }
        return maxW;
        
    }
};
