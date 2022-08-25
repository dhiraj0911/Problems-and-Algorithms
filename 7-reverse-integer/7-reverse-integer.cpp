class Solution {
public:
    int reverse(int x) {
        // bool test = false;
        // if(x < 0){
        //     x = x * -1;
        //     test = true;
        // }
        int ans = 0;
        while(x != 0){
            int y = x % 10;
            x = x / 10;
            
            if(ans > INT_MAX/10 || ans == INT_MAX/10 && y > 7){
                return 0 ;
            }
            if(ans < INT_MIN/10 || ans == INT_MIN/10 && y < -8){
                return 0 ;
            }
            
            ans = ans * 10 + y;   
        }
        
        // if(test)
        //     return ans * -1;
        return ans;
    }
};