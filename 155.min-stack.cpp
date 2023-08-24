/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 */

// @lc code=start
class MinStack {
vector<pair<int,int>> stack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(stack.size() == 0){
            stack.push_back({val,val});
        }else{
            stack.push_back({val,min(stack[stack.size()-1].second,val)});
        }
    }
    
    void pop() {
        stack.pop_back();       
    }
    
    int top() {
        return stack[stack.size() - 1].first;
    }
    
    int getMin() {
        return stack[stack.size() - 1].second;
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
// @lc code=end

