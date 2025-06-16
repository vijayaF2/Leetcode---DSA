class MinStack {
public:
  stack<int>s;
  map<int,int>m;
    MinStack() {
        stack<int>s1=s;
    }
    
    void push(int val) {
        s.push(val);
        m[val]++;
    }
    
    void pop() {
        int x=s.top();
        m[x]--;
        if(m[x]==0) m.erase(x);
        s.pop();
    }
    
    int top() {
        int t=s.top();
        return t;
    }
    
    int getMin() {
          auto f=m.begin();
          return f->first;
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