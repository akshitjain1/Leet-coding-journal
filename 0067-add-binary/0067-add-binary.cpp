class Solution {
public:
    string addBinary(string a, string b) {
        string s = "";
        int i = a.length()-1, j = b.length()-1;
        int carry =0;
        while(i >=0 || j>= 0 || carry > 0){
            int bitA = 0, bitB = 0;
            if(i>=0){
                bitA = a[i]-'0';
            }
            if(j>=0){
                bitB = b[j]-'0';
            }
            int total = bitA + bitB + carry;
            char bitchar ;
            if(total %2 == 0){
                bitchar = '0';
            }else{
                bitchar = '1';
            }

            s = bitchar + s;
            carry = total/2;
            i--;
            j--;
        }
        return s;
    }
};