#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> s1, s2;
public:
    void enqueue(int x) {
        s1.push(x);
        cout << "Enqueued " << x << endl;
    }

    void dequeue() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        cout << "Dequeued " << s2.top() << endl;
        s2.pop();
    }

    void peek() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        cout << "Front element: " << s2.top() << endl;
    }

    void display() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        stack<int> temp1 = s1;
        stack<int> temp2 = s2;

        while (!temp1.empty()) {
            temp2.push(temp1.top());
            temp1.pop();
        }

        cout << "Queue elements: ";
        while (!temp2.empty()) {
            cout << temp2.top() << " ";
            temp2.pop();
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    while (true) {
        cout << "1 Enqueue" << endl;
        cout << "2 Dequeue" << endl;
        cout << "3 Peek" << endl;
        cout << "4 Display" << endl;
        cout << "5 Exit" << endl;
        cout << "Choose option: ";

        int choice;
        cin >> choice;

        if (choice == 1) {
            int x;
            cout << "Enter value to enqueue: ";
            cin >> x;
            q.enqueue(x);
        } else if (choice == 2) {
            q.dequeue();
        } else if (choice == 3) {
            q.peek();
        } else if (choice == 4) {
            q.display();
        } else if (choice == 5) {
            break;
        } else {
            cout << "Invalid choice" << endl;
        }
    }
    return 0;
}
