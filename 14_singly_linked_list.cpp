#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int v) { data = v; next = nullptr; }
};

class SinglyLinkedList {
    Node* head;
public:
    SinglyLinkedList() { head = nullptr; }

    void insertAtBeginning(int x) {
        Node* n = new Node(x);
        n->next = head;
        head = n;
        cout << "Inserted " << x << " at beginning" << endl;
    }

    void insertAtEnd(int x) {
        Node* n = new Node(x);
        if (!head) { head = n; cout << "Inserted " << x << " at end" << endl; return; }
        Node* t = head;
        while (t->next) t = t->next;
        t->next = n;
        cout << "Inserted " << x << " at end" << endl;
    }

    void insertAfterPosition(int pos, int x) {
        if (pos < 0) { cout << "Invalid position" << endl; return; }
        Node* t = head;
        int i = 0;
        while (t && i < pos) { t = t->next; i++; }
        if (!t) { cout << "Position out of range" << endl; return; }
        Node* n = new Node(x);
        n->next = t->next;
        t->next = n;
        cout << "Inserted " << x << " after position " << pos << endl;
    }



int main() {
    SinglyLinkedList list;
    while (true) {
        cout << "1 Insert at beginning" << endl;
        cout << "2 Insert at end" << endl;
        cout << "3 Insert after position" << endl;
        cout << "4 Delete by value" << endl;
        cout << "5 Delete by position" << endl;
        cout << "6 Display" << endl;
        cout << "7 Exit" << endl;
        cout << "Choose option: ";
        int ch;
        if (!(cin >> ch)) break;
        if (ch == 1) {
            int x; cout << "Enter value: "; cin >> x; list.insertAtBeginning(x);
        } else if (ch == 2) {
            int x; cout << "Enter value: "; cin >> x; list.insertAtEnd(x);
        } else if (ch == 3) {
            int pos, x; cout << "Enter position (0-based): "; cin >> pos; cout << "Enter value: "; cin >> x; list.insertAfterPosition(pos, x);
        } else {
            cout << "Invalid choice" << endl;
        }
    }
    return 0;
}
