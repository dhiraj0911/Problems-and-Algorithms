class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        reverse(sandwiches.begin(), sandwiches.end());
        queue<int> q;
        stack<int> s;
        for(int i = 0; i < students.size(); i++){
            q.push(students[i]);
            s.push(sandwiches[i]);
        }
        int rotation = 0;
        while(!s.empty()){
            if(q.front() == s.top()){
                q.pop();
                s.pop();
                rotation = 0;
            }
            else{
                int temp = q.front();
                q.pop();
                q.push(temp);
                rotation++;
                if(rotation >= q.size()){
                    break;
                }
            }
        }
        return s.size();
    }
};