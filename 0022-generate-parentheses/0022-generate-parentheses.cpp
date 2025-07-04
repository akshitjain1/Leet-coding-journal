class Solution {
public:
    void func(int open, int close,int n, vector<string>& result, string temp){
        int total = open+close;
        if(total == 2*n){
            result.push_back(temp);
            return;
        }
        if(open<n){
            func(open+1,close,n,result,temp+'(');
        }
        if(open>close){
            func(open,close+1,n,result,temp+')');
        }
    };
    vector<string> generateParenthesis(int n) {
        int open =0;
        int close =0;
        string temp;
        vector<string> result;
        func(open, close,n, result,temp);
        return result;
    }
};