class MinStack {
    stack<int> s;
    vector<int> mins;
public:
    /** initialize your data structure here. */
    MinStack() {
    }

    void push(int x) {
        mins.push_back(x);
        cout<<x<<" ";
        s.push(x);
    }

    void pop() {
            mins.erase(mins.end()-1);
            s.pop();
    }

    int top() {
            return s.top();

    }

    int getMin() {
            int min = mins[0];
            for(int i=1;i<mins.size();i++){
                if(mins[i]<min)
                    min = mins[i];
            }
            return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
