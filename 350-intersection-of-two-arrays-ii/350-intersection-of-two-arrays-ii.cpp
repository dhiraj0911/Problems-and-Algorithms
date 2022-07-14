class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m;
        vector<int> v;
        // int n = nums1.size(), m = nums2.size();
        // if(n > m){
        //     for(int i = 0; i < nums1.size(); i++)
        //         s.insert(nums1[i]);
        //     for(int i = 0; i < nums2.size(); i++){
        //         if(s.find(nums2[i]) != s.end()){
        //             v.push_back(nums2[i]);
        //             s.erase(nums2[i]);
        //         }
        //     }
        // }
        // else{
        //     for(int i = 0; i < nums2.size(); i++)
        //         s.insert(nums2[i]);
        //     for(int i = 0; i < nums1.size(); i++){
        //         if(s.find(nums1[i]) != s.end()){
        //             v.push_back(nums1[i]);
        //             s.erase(nums1[i]);
        //         }
        //     }
        // }
        for(auto x: nums1){
            m[x]++;
        }
        for(auto y: nums2){
            if(m[y]-- > 0)
                v.push_back(y);
        }
        return v;
    }
};