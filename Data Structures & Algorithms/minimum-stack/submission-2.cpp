#include <vector>
using namespace std;

class MinStack {

    //std::vector<int> v(100,0);
    int*v,*v2;
    int tp{0};
        
public:
    MinStack() {
        v = new int[1000];
        v2= new int[1000];
    }
    
    void push(int val) {
        // v.push_back(val);
        // ++tp;       
        if(tp<1000)
        {
            v[tp++] = val;
            if(tp==1)
                v2[tp-1] = val;
            else
            {    
                cout<<" tp is "<<tp<<" v2[tp-1] is "<<v2[tp-1]<<" and val is "<<val<<endl;
            int m = min(v2[tp-2],val);
            cout<<"inserting "<<m<<" at "<<tp-1<<endl;
            v2[tp-1] = m;
            }
        }
    }
    
    void pop() {
        cout<<"top is "<<tp<<endl;
        if(tp>0)
            --tp;
        
    }
    
    int top() {
        cout<<"top is "<<tp<<endl;
        if(tp>0)
            return v[tp-1];
        else
            return 0;
    }
    
    int getMin() {
        cout<<"all elements in v2 \n";
        for(int i=0;i<tp;i++)
            cout<<v2[i]<<" ";
        cout<<endl;
        if(tp>0)
            return v2[tp-1];
        else
            return 0;
        
    }
};
