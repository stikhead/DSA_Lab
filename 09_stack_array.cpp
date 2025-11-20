#include <iostream>
using namespace std;
class Stack {
    int arr[100], top, size;
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
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(3);
    st.pop();
    st.peek();
    st.display();
    return 0;
}
