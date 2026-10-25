#include <cstdlib>

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int last;
        int before_last;

        for (int i = 0; i < tokens.size(); i++)
        {
            char token = tokens[i][0];
            bool is_token = (token == '+' || token == '-' || token == '/' || token == '*')
                    && (tokens[i].size() == 1);
            if (!is_token)
                st.push(std::atoi(tokens[i].c_str()));
            else
            {
                if (st.size() >= 2)
                {
                    last = st.top();
                    st.pop();
                    before_last = st.top();
                    st.pop();
                }
                if (token == '+')
                    st.push(last + before_last);
                else if (token == '-')
                    st.push(before_last - last);
                else if (token == '*')
                    st.push(before_last * last);
                else
                {
                    if (last != 0)
                        st.push(before_last / last);
                    else
                        return 1;
                }
            }
        }
        return st.top();
    }
};
