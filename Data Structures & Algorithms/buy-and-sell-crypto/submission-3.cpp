class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxp =0,p=0;
        //int j=0;
        for(int i=0,j=i+1;i<prices.size()-1 && j< prices.size();)
        {
           
            if(prices[i]>=prices[j])
            {
                i=j;
                j++;
                continue;
            }
            p = prices[j]-prices[i];
            if( p>maxp)
                maxp = p;

            j++;
        }
        return maxp;
        
    }
};
