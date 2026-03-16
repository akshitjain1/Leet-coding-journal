class Solution {
public:
    int countsetbit(int n){
        int count =0;
        while(n){
            count += n & 1;
            n >>= 1;
        }
        return count;
    }
    bool is_prime(int n){
        int cnt =0;
        if(n<=1){
            return false;
        }else{
            for(int i = 2; i*i <=n ;i++){
                if(n%i == 0){
                    cnt++;
                    break;
                }
            }
        }
        if(cnt>0){
            return false;
        }else{
            return true;
        }
    }
    int countPrimeSetBits(int left, int right) {
        int result =0;
        while(left<=right){
            int count = countsetbit(left);
            if(is_prime(count)){
                result++;
            }
            left++;
        }
        return result;
    }
};