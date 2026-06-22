class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int one,two,result;
        for(string s:tokens)
        {
            if( s == "*")
            {
                one = st.empty()?0:st.top();
                st.pop();
                two = st.empty()?0:st.top();
                st.pop();
                result = one*two;
                st.push(result);
            }
            else if( s == "+")
            {
                  one = st.empty()?0:st.top();
                st.pop();
                two = st.empty()?0:st.top();
                st.pop();
                result = one+two;
                 st.push(result);
            }
             else if( s == "-")
            {
                  one = st.empty()?0:st.top();
                st.pop();
                two = st.empty()?0:st.top();
                st.pop();
                result = two-one;
                 st.push(result);
            }
             else if( s == "/")
            {
                  one = st.empty()?0:st.top();
                st.pop();
                two = st.empty()?0:st.top();
                st.pop();
                result = two/one;
                 st.push(result);
            }
            else
            {
                int i = std::stoi(s);
                st.push(i);

            }
        }
        return st.empty()?0:st.top();
        
    }
};
