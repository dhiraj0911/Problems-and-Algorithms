class MyCircularQueue {
public:
    vector<int> v;
    int size;
    MyCircularQueue(int k) {
        size = k;
    }
    
    bool enQueue(int value) {
        if(v.size() == size)
            return false;
        v.push_back(value);
        return true;
    }
    
    bool deQueue() {
        if(v.empty())
            return false;
        for(int i = 1; i < v.size(); i++)
            v[i - 1] = v[i];
        v.pop_back();
        return true;
    }
    
    int Front() {
        if(v.empty())
            return - 1;
        return v[0];
    }
    
    int Rear() {
        if(v.empty())
            return - 1;
        return v[v.size() - 1];
    }
    
    bool isEmpty() {
        if(v.empty())
            return true;
        return false;
    }
    
    bool isFull() {
        if(v.size() == size)
            return true;
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */