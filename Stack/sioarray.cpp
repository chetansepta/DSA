#include <iostream>
using namespace std;

#define MAX 5  

class Stack {
    int top;
    int arr[MAX];

public:
    Stack() { top = -1; }

    void push(int value) {
        if (top == MAX - 1) {
            cout << "Stack Overflow!\n";
            return;
        }
        arr[++top] = value;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow!\n";
            return;
        }
        top--;
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is empty!\n";
            return;
        }
        cout << "Top element: " << arr[top] << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    s.peek();
    return 0;
}
