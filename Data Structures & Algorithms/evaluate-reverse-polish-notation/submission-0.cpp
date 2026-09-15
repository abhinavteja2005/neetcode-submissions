class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for(auto token : tokens) {
            if(token != "+" && token != "-" && 
               token != "*" && token != "/") {
                st.push(stoi(token));
            }
            else {
                int a = st.top();
                st.pop();

                int b = st.top();
                st.pop();

                int ans;

                if(token == "+") {
                    ans = b + a;
                }
                else if(token == "-") {
                    ans = b - a;
                }
                else if(token == "*") {
                    ans = b * a;
                }
                else {
                    ans = b / a;
                }

                st.push(ans);
            }
        }

        return st.top();
    }
};