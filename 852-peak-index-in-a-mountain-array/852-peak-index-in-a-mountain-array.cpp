class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        long long int low = 0, high = arr.size() - 1;
        while(low <= high){
            long long int mid = low + (high - low) / 2;
            if(arr[mid] < arr[mid + 1])
                low = mid + 1;
            else if(arr[mid] < arr[mid - 1])
                high = mid - 1;
            else
                return mid;
        }
        return 0;
    }
};