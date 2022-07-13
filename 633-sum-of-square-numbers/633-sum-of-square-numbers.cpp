class Solution {
public:
    bool judgeSquareSum(int c) {
        // long long int low = 1, high = c-1;
        // if(c == 0 ||c == 1 || c == 4 || c == 9)
        //     return true;
        // while(low <= high){
        //     if(((low * low) + (high * high)) == c)
        //         return true;
        //     else if(((low * low) + (high * high)) > c)
        //         high = high - 1;
        //     else
        //         low = low + 1;
        // }
        // return false;
        double a = 0;
        for(a = 0; a * a <= c; a++){
            double b = sqrt(c - a * a);
            if(b == (int) b)
                return true;
        }
        return false;
    }
};