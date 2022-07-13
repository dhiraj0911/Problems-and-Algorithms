class Solution {
public:
    int search(vector<int>& v, int target) {
        long long int low = 0, high = v.size() - 1;
        while(low <= high){
            long long int mid = (low + high) / 2;
            if(v[mid] == target)
                return mid;
            else if(v[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }
};