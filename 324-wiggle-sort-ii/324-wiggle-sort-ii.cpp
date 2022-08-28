class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        // vector<int> ans(nums.size(), 0);
        // sort(nums.begin(), nums.end());
        // int k = 1, i = nums.size() - 1;
        // while(k < nums.size()){
        //     ans[k] = nums[i];
        //     i = i + 2;
        //     j--;
        // }
        // int k = 0;
        // while(k < nums.size()){
        //     ans[k] = nums[i];
        //     k = k + 2;
        //     i--;
        // }
        // nums = ans;
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>ans(n,0);
        int k=1;
        int i=n-1;
        while(k<n)
        {
            
            ans[k]=nums[i];
            i--;
            k=k+2;
            
        }
        int j=0;
        while(j<n)
        {
            ans[j]=nums[i];
            i--;
            j=j+2;
        }
        nums=ans;
    }
};