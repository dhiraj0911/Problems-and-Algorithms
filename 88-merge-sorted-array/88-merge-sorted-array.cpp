class Solution {
public:        
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v;
        for(int i = 0; i < m; i++)
            // if(nums1[i] != 0)
            v.push_back(nums1[i]);
        for(int i = 0; i < nums2.size(); i++)
            // if(nums1[i] != 0)
            v.push_back(nums2[i]);
        nums1 = v;
        sort(nums1.begin(), nums1.end());
    }
};