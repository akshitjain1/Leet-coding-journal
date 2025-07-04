class Solution {
public:
        bool isPalindrome(string& str, int start, int end) {
        while (start < end) {
            if (str[start] != str[end]) return false;
            start++;
            end--;
        }
        return true;
    }

    void backtrack(int start, string& s, vector<string>& current, vector<vector<string>>& result) {
        if (start == s.size()) {
            result.push_back(current); // Found a valid partition
            return;
        }

        for (int i = start; i < s.size(); ++i) {
            if (isPalindrome(s, start, i)) {
                current.push_back(s.substr(start, i - start + 1)); // Choose
                backtrack(i + 1, s, current, result);              // Explore
                current.pop_back();                                  // Un-choose (backtrack)
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> current;
        backtrack(0, s, current, result);
        return result;
    }
};