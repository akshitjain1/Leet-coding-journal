class Solution {
public:
    int reverse(int x) {
        int long n = 0;
        while(x != 0){
            int rem = x%10;
            n = n*10 + rem;
            x = x/10;
        }
        return n;
    }
};