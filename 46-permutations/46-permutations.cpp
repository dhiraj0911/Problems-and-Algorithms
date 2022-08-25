class Solution {
public:
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>> v;
//         vector<int> v1;
//         do{
//             store(nums, v1);
//             v.push_back(v1);
//         }while(next_permutation(nums.begin(), nums.end()));
        
//         return v;
//     }
    
//     void store(vector<int> &nums, vector<int> &v1){
//         v1.clear();
//         for(int i = 0; i < nums.size(); i++){
//             v1.push_back(nums[i]);
//         }
//     }
    vector<vector<int>> permute(vector<int>& nums){
        vector<vector<int>> v;
        int index = 0;
        store(v, nums, index);
        return v;
    }
    
    void store(vector<vector<int>> &v, vector<int> &nums, int index){
        if(index >= nums.size()){
            v.push_back(nums);
            return;
        }
        else{
            for(int i = index; i < nums.size(); i++){
                swap(nums[i], nums[index]);
                store(v, nums, index + 1);
                swap(nums[i], nums[index]);
            }
        }
    }
    
};