class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // if(nums.size() == 0)
        //     return 0;
        // if(nums.size() == 1 and nums[0] == val)
        //     return 0;
        // else if(nums.size() == 1 and nums[0] != val){
        //     return 1;
        // }
        // int temp = 0;
        // while(nums[temp] != val || temp < nums.size()){
        //     temp++;
        // }
        // if(temp == nums.size() - 1)
        //     return nums.size();
        set<int> s;
        for(auto x: nums){
            s.insert(x);
        }
        if(s.find(val) == s.end())
            return nums.size();
        int low  = 0, high = nums.size() - 1;
        while(low < high){
            if(nums[low] == val && nums[high] != val){
                swap(nums[low], nums[high]);
                low++;
                high--;
            }
            else if(nums[low] == val && nums[high] == val){
                high--;
            }
            else{
                low++;
            }
        }
        int i = 0;
        while(nums[i] != val){
            i++;
        }
        return i;
    }
};