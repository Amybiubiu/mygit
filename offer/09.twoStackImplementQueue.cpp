class CQueue {
private:
    stack<int> s1;
    stack<int> s2;
public:
    CQueue() {
    }
    
    void appendTail(int value) {
        s1.push(value);
    }
    
    int deleteHead() {
        if(s2.empty()){
            while(!s1.empty()){
                int val = s1.top();
                s1.pop();
                s2.push(val);
            }
        }
        if(s2.empty()){
            return -1;
        }
        int res = s2.top();
        s2.pop();
        return res;
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */