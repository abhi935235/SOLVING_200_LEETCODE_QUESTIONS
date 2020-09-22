class CustomStack {
    int top;
    int *stack;
    int maxSize;
public:
    CustomStack(int maxSize) {
       this->top=-1;
       this->maxSize=maxSize;
       this->stack = new int[maxSize];
    }

    void push(int x) {
        if(top<maxSize-1){
            top++;
            stack[top]=x;
        }
    }

    int pop() {
        if(top!=-1){
            return stack[top--];
        }else{
            return -1;
        }
    }

    void increment(int k, int val) {
        if(top<k){
            for(int i=0;i<=top;i++){
                stack[i]+=val;
            }
        }else{
            for(int i=0;i<k;i++){
                stack[i]+=val;
            }
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
