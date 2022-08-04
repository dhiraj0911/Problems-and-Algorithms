class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s;
        for(int i = 0; i < ops.size(); i++){
            if(ops[i] == "+"){
                int temp = s.top();
                s.pop();
                int res = s.top() + temp;
                s.push(temp);
                s.push(res);
            }
            else if(ops[i] == "D"){
                int res = s.top();
                s.push(res * 2);
            }
            else if(ops[i] == "C"){
                s.pop();
            }
            else{
                int res = stoi(ops[i]);
                s.push(res);
            }
        
        }
        int ans = 0;
        while(!s.empty()){
            ans += s.top();
            s.pop();
        }
        return ans;
    }
};