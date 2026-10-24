class MinStack{
private:
    stack<int> st;
    stack<int> mm;
public:
    MinStack(){
    }
    
    void push(int val) {
        st.push(val);
        if (mm.empty() || val < mm.top())
            mm.push(val);
        else
            mm.push(mm.top());
    }
    
    void pop() {
        st.pop();
        mm.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mm.top();
    }
};
