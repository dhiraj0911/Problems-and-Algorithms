class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> v;
        int count = 1;
        int i = 0;
        // int temp = (target.back() == n) ? n: target.size(); 
        int temp = target.back();
        while(count <= temp){
            if(target[i] == count){
                v.push_back("Push");
                count++;
                i++;
            }
            else if(target[i] > count){
                v.push_back("Push");
                v.push_back("Pop");
                count++;
            }
        }
        return v;
    }
};