class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;
        for (const string& t : tokens) {
            if (t=="+" || t=="-" || t=="*" || t=="/") {
                long long b = st.top(); st.pop();
                long long a = st.top(); st.pop();
                long long r = 0;
                if (t == "+") r = a + b;
                else if (t == "-") r = a - b;
                else if (t == "*") r = a * b;
                else r = a / b;               
                st.push(r);
            } else {
                st.push(stoll(t));
            }
        }
        return (int)st.top();
    }
};
