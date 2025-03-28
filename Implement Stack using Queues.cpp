class MyStack {
private:
    std::queue<int> q1, q2;
public:
    MyStack() { }
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        if(q1.empty()) return -1;

        while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        
    int poppedElement = q1.front();
    q1.pop();

    swap(q1,q2);
    return poppedElement;
}
    
    int top() {
        if(q1.empty()) return -1;

        while(q1.size() > 1){
            q2.push(q1.front());
            q1.pop();
        }

        int top = q1.front();
        q2.push(top);
        q1.pop();

        swap(q1,q2);
        return top;
    }
    
    bool empty() {
        return q1.empty();
    }
};
