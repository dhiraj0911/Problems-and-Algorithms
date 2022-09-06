class Solution {
public:
    bool isHappy(int n) {
        if(n == 1 || n == 7)
            return true;
        if(n < 10 && n > 1)
            return false;
        int ans = isThere(n);
        if(ans == 1)
            return true;
        return false;
    }
    
    int isThere(int n) {
        int s = 0;
        while(n > 0) {
            int d = n % 10;
            s += d * d;
            n /= 10;
        }
        if(s < 9 && s != 7)
            return s;
        return isThere(s);
    }
};