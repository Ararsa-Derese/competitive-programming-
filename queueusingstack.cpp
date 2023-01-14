class MyQueue {
public:
stack<int> st1;
stack<int> st2;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(st1.empty()){
        st1.push(x);
       }
        else{
           int i=st1.size();
           while(i--){
               int p=st1.top();
               st1.pop();
               st2.push(p);
           }
           int s=st2.size();
           st1.push(x);
           while(s--){
               int a=st2.top();
               st2.pop();
               st1.push(a);
           }

            }
        }
    
    
    int pop() {
        int p=st1.top();
        st1.pop();
        return p;
    }
    
    int peek() {
        return st1.top();
    }
    
    bool empty() {
        return st1.empty();
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
