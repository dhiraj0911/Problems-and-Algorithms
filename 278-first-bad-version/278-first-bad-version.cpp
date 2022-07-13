// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int low = 0, high = n;
        while(low <= high){
            long long int mid = (low + high) / 2;
            if(!isBadVersion(mid))
                low = mid + 1;
            else{
                if(isBadVersion(mid) == true && isBadVersion(mid - 1) == false)
                    return mid;
                else
                    high = mid - 1;
            }
        }
        return -1;
    }
};