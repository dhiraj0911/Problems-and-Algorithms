class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int cnt = 0;
        for (auto i : data) {
            if (cnt == 0) {
                if((i >> 5) == 0b110)
                    cnt = 1;
                else if ((i >> 4) == 0b1110)
                    cnt = 2;
                else if ((i >> 3) == 0b11110)
                    cnt = 3;
                else if ((i >> 7))
                    return false;
            } 
            else {
                if ((i >> 6) != 0b10)
                    return false;
                cnt--;
            }
        }
    return cnt==0;
    }
};