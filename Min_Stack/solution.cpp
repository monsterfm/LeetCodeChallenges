class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        this->myStack.push(x);
        this->setForMin.insert(x);
    }
    
    void pop() {
        multiset<int>::iterator it=this->setForMin.find(this->myStack.top());
        this->setForMin.erase(it);
        this->myStack.pop();
    }
    
    int top() {
        return this->myStack.top();
    }
    
    int getMin() {
        return *this->setForMin.begin();
    }
    
private:
    stack<int> myStack;
    multiset<int> setForMin;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */