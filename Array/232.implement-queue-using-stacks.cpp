/*
 * @lc app=leetcode id=232 lang=cpp
 *
 * [232] Implement Queue using Stacks
 */

// @lc code=start
class MyQueue {
public:
    stack<int> st;
    MyQueue() {

    }

    void push(int x) {
        stack<int> temp;
        while(!st.empty()){
            temp.push(st.top());
            st.pop();
        }
        st.push(x);
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
    }
    
    int pop() {
        int x=st.top();
        st.pop();
        return x;
    }
    
    int peek() {
        int x=st.top();
        return x;
    }
    
    bool empty() {
        return st.empty();
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
// @lc code=end

