class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        if (s.empty()) return false;
        for (char val : s) {
            if (val == '[' || val == '{' || val == '('){
                st.push(val);
            }
            else {
                if (st.empty()) return false;
                else if (val == '}' && st.top() == '{') st.pop();
                else if (val == ']' && st.top() == '[') st.pop();
                else if (val == ')' && st.top() == '(') st.pop();
                else return false;
            }
        }
        return st.empty();
    }
};