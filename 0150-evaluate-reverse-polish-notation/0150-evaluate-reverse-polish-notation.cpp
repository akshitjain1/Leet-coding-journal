#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long> st; // Use long to prevent overflow during intermediate steps

        for (const string& s : tokens) {
            // Check if the token is an operator
            if (s == "+" || s == "-" || s == "*" || s == "/") {
                // Pop the two most recent operands
                long val1 = st.top(); st.pop();
                long val2 = st.top(); st.pop();
                
                // Perform operation (Note the order: val2 [op] val1)
                if (s == "+") st.push(val2 + val1);
                else if (s == "-") st.push(val2 - val1);
                else if (s == "*") st.push(val2 * val1);
                else if (s == "/") st.push(val2 / val1);
            } else {
                // If it's a number, convert string to integer and push
                st.push(stoi(s));
            }
        }
        
        return (int)st.top();
    }
};
