class Solution {
public:
    int missingNumber(vector<int>& v) {
        // sort(v.begin(), v.end());
        // stack<int> s;
        // s.push(v[0]);
        // int i = 1;
        // while(i <= v.size()){
        //     if(s.top() + 1 == v[i]){    
        //         s.push(v[i]);
        //         i++;
        //     }
        //     else
        //         return s.top() + 1;
        // }
        // return 0;
        
        int n = v.size();
        int tot = n * (n + 1)/ 2;
        for(int i = 0; i < v.size(); i++){
            tot -= v[i];
        }
        return tot;
    }
};