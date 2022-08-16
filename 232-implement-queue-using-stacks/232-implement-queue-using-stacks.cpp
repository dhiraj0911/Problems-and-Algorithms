class MyQueue {
    stack<int> s1, s2;
    int topS;
public:
    MyQueue() {
        topS = -1;
    }
    
    void push(int x) {
        if(s1.empty())
            topS = x;
        s1.push(x);
    }
   
    int pop() {
        while(s1.size() != 1){
            s2.push(s1.top());
            s1.pop();
        }
        int x = s1.top();
        s1.pop();
        if(!s2.empty())
            topS = s2.top();    
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return x;
    }
    
    int peek() {
        return topS;
    }
    
    bool empty() {
        if(s1.empty())
            return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */