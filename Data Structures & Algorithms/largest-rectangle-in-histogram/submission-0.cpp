class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

       stack<pair<int,int>> st;
        int n=heights.size();
        int maxA =0;
       for(int i=0;i<n;++i)
       {
            int idx=i;
            if(!st.empty())
            {
                auto t = st.top();
                while( t.second > heights[i])
                {
                    int ar = (i-t.first)*t.second;
                    maxA = max(maxA,ar);
                    idx=t.first;
                    st.pop();
                    if(st.empty())
                        break;
                    t = st.top();
                }
            }
            st.push(pair<int,int>(idx,heights[i]));
       }
        
        while(!st.empty())
        {
            auto t = st.top();
            int idx = t.first;
            int height = t.second;
            int ar = height * (heights.size() - idx);
            maxA = max(maxA,ar);
            st.pop();
        }
        return maxA;
    }
};
