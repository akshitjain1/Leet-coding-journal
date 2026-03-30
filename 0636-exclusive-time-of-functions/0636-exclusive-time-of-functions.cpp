#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> result(n, 0);
        stack<int> st; // Stores function IDs
        int prevTime = 0;

        for (const string& log : logs) {
            // 1. Parse the log string "id:type:timestamp"
            int firstCol = log.find(':');
            int lastCol = log.find_last_of(':');
            
            int id = stoi(log.substr(0, firstCol));
            string type = log.substr(firstCol + 1, lastCol - firstCol - 1);
            int timestamp = stoi(log.substr(lastCol + 1));

            if (type == "start") {
                // If a function was already running, calculate its time up to now
                if (!st.empty()) {
                    result[st.top()] += (timestamp - prevTime);
                }
                st.push(id);
                prevTime = timestamp;
            } else { // type == "end"
                // Add time to the current function
                // +1 because "end" at time 5 means it ran until the end of second 5
                result[st.top()] += (timestamp - prevTime + 1);
                st.pop();
                // The next available time starts at the next integer
                prevTime = timestamp + 1;
            }
        }
        
        return result;
    }
};
