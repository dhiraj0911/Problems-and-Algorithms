class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        // set<vector<int>> s;
        // sort(nums1.begin(), nums1.end());
        // sort(nums2.begin(), nums2.end());
        // sort(nums3.begin(), nums3.end());
        // sort(nums4.begin(), nums4.end());
        // for(int i = 0; i < nums1.size() - 3; i++){
        //     for(int j = 0; j < nums1.size() - 2; j++){
        //         long long int low = 0, high = nums1.size() - 1;
        //         while(low < high){
        //             long long int sum = nums3[low] + nums4[high];
        //             if(sum + nums1[i] + nums2[j] == 0){
        //                 s.insert({nums1[i], nums2[j], nums3[low], nums4[high]});
        //                 low++;
        //                 high--;
        //             }
        //             else if(sum + nums1[i] + nums2[j] > 0)
        //                 high--;
        //             else if(sum + nums1[i] + nums2[j] < 0)
        //                 low++;
        //         }
        //     }
        // }
        // return s.size();
        map<int, int> m;
        for(int i: nums1)
            for(int j: nums2)
                m[i + j]++;
        int sum = 0;
        int count = 0;
        for(int k: nums3)
            for(int l: nums4)
                count = count + m[sum - (k + l)];
        return count;
    }
};