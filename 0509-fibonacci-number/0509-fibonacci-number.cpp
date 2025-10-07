// Using linear Method
// class Solution {
// public:
//     int fib(int n) {
//         int arr[n+1];

//         if(n<=1)return n;
        
//         arr[0]=0;
//         arr[1]=1;
//         for(int i=2;i<=n;i++){
//             arr[i]= arr[i-1]+arr[i-2];
//         }
//         return arr[n];
//     }
// };


// Multiple Recursion Calls
class Solution{
    public:
    int f(int n){
        if(n<=1) return n;
        return f(n-1)+f(n-2);
    }
    int fib(int n){
        return f(n);
    }
};