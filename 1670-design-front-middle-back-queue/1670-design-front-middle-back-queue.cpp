class FrontMiddleBackQueue {
public:
    vector<int> v;
    FrontMiddleBackQueue() {
    }
    
    void pushFront(int val) {
        v.insert(v.begin(), val);
    }
    
    void pushMiddle(int val) {
        int mid = v.size() / 2;
        v.insert(v.begin() + mid, val);
    }
    
    void pushBack(int val) {
        v.push_back(val);
    }
    
    int popFront() {
        if(v.empty())
            return -1;
        int f = v[0];
        for(int i = 0; i < v.size() - 1; i++) {
            v[i] = v[i + 1];
        }
        v.pop_back();
        return f;
    }
    
    int popMiddle() {
        if(v.empty())
            return -1;
        int mid = v.size() % 2 == 0 ? v.size() / 2 - 1   : v.size() / 2;
        int m = v[mid];
        for(int i = mid; i < v.size() - 1; i++)
            v[i] = v[i + 1];
        v.pop_back();
        return m;
    }
    
    int popBack() {
        if(v.empty())
            return -1;
        int b = v[v.size() - 1];
        v.pop_back();
        return b;
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */