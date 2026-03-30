#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        // We use a stack to keep track of the indices of items 
        // that are still waiting for a discount.
        stack<int> st;
        
        for (int i = 0; i < prices.size(); i++) {
            // While the stack is not empty AND the current price is 
            // smaller than or equal to the price at the index on top of the stack:
            // We found the discount for the item at st.top()!
            while (!st.empty() && prices[st.top()] >= prices[i]) {
                prices[st.top()] -= prices[i];
                st.pop();
            }
            // Push current index to find a discount for it later
            st.push(i);
        }
        
        return prices;
    }
};
