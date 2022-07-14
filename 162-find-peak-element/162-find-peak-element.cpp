class Solution {
public:
    int findPeakElement(vector<int>& v) {
        int n = v.size() - 1;
        int left = 0, right = n;
        while(left < right){
            int mid = (left + right) / 2;
            if(v[mid] > v[mid + 1])
                right = mid;
            else
                left = mid + 1;
        }
        return left;
    }
};