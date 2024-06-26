class MyStack {
    queue<int> q1, q2;
    int topE;
public:
    MyStack() {
        topE = -1;
    }
    
    void push(int x) {
        topE = x;
        q1.push(x);
    }
    
    int pop() {
        while(q1.size() != 1){
            q2.push(q1.front());
            q1.pop();
        }
        int x = q1.front();
        q1.pop();
        while(!q2.empty()){
            q1.push(q2.front());
            topE = q2.front();
            q2.pop();
        }
        return x;
    }
    
    int top() {
        return topE;
    }
    
    bool empty() {
        if(q1.empty())
            return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */