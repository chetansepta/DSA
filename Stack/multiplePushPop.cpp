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
        cout << value << " pushed into stack.\n";
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow!\n";
            return;
        }
        cout << arr[top--] << " popped from stack.\n";
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty!\n";
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.display();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
