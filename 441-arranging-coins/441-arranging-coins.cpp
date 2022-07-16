class Solution {
public:
    int arrangeCoins(int n) {
        int count = 0;
        int i = 1;
        int temp = n;
        while(temp > 0){
            temp -= i;
            i++;
            count++;
        }
        if(temp == 0)
            return count;
        count--;
        return count;
    }
};