class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        map<string, vector<string>> m;
        for(auto x: paths) {
            int n = x.size();
            string temp = "";
            int i = 0;
            while(i < n && x[i] != ' '){
                temp += x[i];
                i++;
            }
            temp += "/";
            i++;
            while(i < n) {
                string file = "";
                string con = "";
                while(i < n && x[i] != '(') {
                    file += x[i];
                    i++;
                }
                while(i < n && x[i] != ' ') {
                    con += x[i];
                    i++;
                }
                m[con].push_back(temp + file);
                i++;
            }
            // while(i < n && x[i] != '(') {
            //     temp += x[i];
            //     i++;
            // }
            // i++;
            // string con = "";
            // while(i < n && x[i] != ')') {
            //     con += x[i];
            //     i++;
            // }
            // m[con].push_back(temp);
            // i++;
        }
        vector<vector<string>> res;
        for(auto x: m) {
            if(x.second.size() > 1)
                res.push_back(x.second);
        }
        return res;
    }
};