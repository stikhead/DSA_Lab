#include <iostream>
using namespace std;

class Stack {
    int arr[100];
    int top;
    int size;
public:
    Stack(int s) {
        size = s;
        top = -1;
    }

    void push(int x) {
        if (top == size - 1) {
            cout << "Stack is full" << endl;
            return;
        }
        top++;
        arr[top] = x;
        cout << "Pushed " << x << endl;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Popped " << arr[top] << endl;
        top--;
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Top element: " << arr[top] << endl;
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int n;
    cout << "Enter stack size: ";
    cin >> n;
    Stack st(n);
    while (true) {
        cout << "1 Push" << endl;
        cout << "2 Pop" << endl;
        cout << "3 Peek" << endl;
        cout << "4 Display" << endl;
        cout << "5 Exit" << endl;
        cout << "Choose option: ";
        int choice;
        cin >> choice;
        if (choice == 1) {
            int x;
            cout << "Enter value to push: ";
            cin >> x;
            st.push(x);
        } else if (choice == 2) {
            st.pop();
        } else if (choice == 3) {
            st.peek();
        } else if (choice == 4) {
            st.display();
        } else if (choice == 5) {
            break;
        } else {
            cout << "Invalid choice" << endl;
        }
    }
    return 0;
}
