//
//  main.cpp
//  用队列实现栈
//
//  Created by 潘孝正 on 2021/3/23.
//

#include <iostream>
#include <queue>

using namespace std;

class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {

    }
    
    /** Push element x onto stack. */
    void push(int x) {
        int size = myQueue.size();
        myQueue.push(x);
        while (size > 0) {
            int val = myQueue.front();
            myQueue.pop();
            myQueue.push(val);
            --size;
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int val = myQueue.front();
        myQueue.pop();
        return val;
    }
    
    /** Get the top element. */
    int top() {
        return myQueue.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return myQueue.empty();
    }
    
private:
    queue<int> myQueue;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
