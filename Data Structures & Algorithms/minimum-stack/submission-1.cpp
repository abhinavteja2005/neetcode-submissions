class MinStack {
private:
    stack<int> st;
    vector<int> mn;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(mn.empty()){
            mn.push_back(val);
        }else if(mn.back() >= val){
            mn.push_back(val);
        }
        st.push(val);
    }
    
    void pop() {
        if(mn.back() == st.top()){
            mn.pop_back();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mn.back();
    }
};
