class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        vector<int> v(n, -1);
        for(int i = 0; i < nums1.size(); i++){
            bool temp = false;
            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j])
                    temp = true;
                if(temp){
                    if(nums2[j] > nums1[i]){
                        v[i] = nums2[j];
                        break;
                    }
                }
            }
        }
        return v;
    }
};