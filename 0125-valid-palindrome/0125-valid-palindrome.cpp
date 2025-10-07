class Solution {
public:
    bool f(string &s , int i){
        if(i>=s.size()/2)return true;
        if(s[i] != s[s.size()-i-1])return false;
        return f(s, i+1);
    }
    bool isPalindrome(string s) {
        string s2 = "";
        for(char c : s){
            if(isalnum(c)){
                s2.push_back(tolower(c));
            }
        }
        return f(s2, 0);
    }
};