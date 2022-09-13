class Solution {
public:
    int fib(int n) {
        // int ans = 0;
        // for(int i = 0; i <= n; i++) {
        //     ans += i;
        // }
        // return ans;
        if(n <= 1)
            return n;
        return fib(n - 1) + fib(n - 2);
    }
};