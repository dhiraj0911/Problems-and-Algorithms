/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        long long int peak = peakMount(mountainArr);
        long long int left = LBinarySearch(target, mountainArr, 0, peak);
        if(left != -1)
            return left;
        else
            return RBinarySearch(target, mountainArr, peak + 1, mountainArr.length() - 1);
    }
    int LBinarySearch(int target, MountainArray &mountainArr,int low, int high){
        while(low <= high){
            long long int mid = low + (high - low) / 2;
            if(mountainArr.get(mid) == target)
                return mid;
            else if(mountainArr.get(mid) > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return -1;    
    }
    int RBinarySearch(int target, MountainArray &mountainArr,int low, int high){
        while(low <= high){
            long long int mid = low + (high - low) / 2;
            if(mountainArr.get(mid) == target)
                return mid;
            else if(mountainArr.get(mid) > target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;    
    }
    int peakMount(MountainArray &mountainArr){
        long long int low = 0, high = mountainArr.length() - 1;
        while(low <= high){
            long long int mid = low + (high - low) / 2;
            if(mountainArr.get(mid) < mountainArr.get(mid + 1))
                low = mid + 1;
            else if(mountainArr.get(mid) < mountainArr.get(mid - 1))
                high = mid - 1;
            else
                return mid;
        }
        return -1;
    }
};