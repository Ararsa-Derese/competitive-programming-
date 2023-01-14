class MinStack {
public: 
   stack<int> st1;
    stack<int> st2;
    MinStack() {
        while(!st1.empty())
            st1.pop();
        while(!st2.empty())
            st2.pop();
    }
    
    void push(int val) {
        st1.push(val);
        if(st2.empty() || val<=st2.top())
            st2.push(val);
    }
    
    void pop() {
        int t=st1.top();
        st1.pop();
        if(t==st2.top())
            st2.pop();
    }
    
    int top() {
        return st1.top();
    }
    
    int getMin() {
        return st2.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
