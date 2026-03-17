class Solution {
public:
    bool check(const string& s, int left, int right) {
        if (left >= right) return true; 
        
        if (s[left] != s[right]) return false; 
        
        return check(s, left + 1, right - 1); 
    }

    bool isPalindrome(string s) {
        string s2 = "";
        for(char c : s) {
            if(isalnum(c)) s2.push_back(tolower(c));
        }
        if (s2.empty()) return true;
        return check(s2, 0, s2.size() - 1);
    }
};
