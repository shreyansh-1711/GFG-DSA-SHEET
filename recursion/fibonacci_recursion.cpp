// class Solution {
// public:
//     int fib(int n) {
//         if(n==0) return 0;
//         if(n==1) return 1;

//         int ans = fib(n-1) + fib(n-2);
//         return ans;
//     }
// };



// iterative approach 
// class Solution {
// public:
//     int fib(int n) {
//         if(n == 0 || n == 1)
//             return n;
//         int a = 0;
//         int b = 1;
//         int ans = 0;
//         for(int i = 1; i < n; i++){
//             ans = a + b;
//             a = b;
//             b = ans;
//         }
//         return ans;
//     }
// };