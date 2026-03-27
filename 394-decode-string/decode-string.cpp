class Solution {
public:
    string decodeString(string s) {
        stack<int> numStack;
        stack<string> strStack;

        string currentString = "";
        int CurrentNum = 0;

        for (char ch : s) {
            if(isdigit(ch)) { 
                CurrentNum = CurrentNum * 10 + (ch - '0');
             }
             else if (ch == '[') {
                numStack.push(CurrentNum);
                strStack.push(currentString);

                CurrentNum = 0;
                currentString = "";
             }
            else if (ch == ']') {
                int repeatTimes = numStack.top();
                numStack.pop();

                string previousString = strStack.top();
                strStack.pop();

                string repeatedString = "";
                for (int i = 0; i < repeatTimes; i ++  ) {
                    repeatedString += currentString;
                }

                currentString = previousString + repeatedString;
            }
            else { 
                currentString += ch;
            }
        }

        return currentString;
        }
            
};