class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map <char, int> count_for_s;
        unordered_map <char,int> count_for_t;
        for(int i=0;i<s.size();i++){
            count_for_s[s[i]]++;
            count_for_t[t[i]]++;
        }
        return count_for_s == count_for_t;
    }
};