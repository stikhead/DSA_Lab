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

    void createNode(int x) {
        Node* n = new Node(x);
        if (!head) { head = n; cout << "Inserted " << x << " at end" << endl; return; }
        Node* t = head;
        while (t->next) t = t->next;
        t->next = n;
        cout << "Inserted " << x << " at end" << endl;
    }
    SinglyLinkedList() { head = nullptr; }
    void deleteByValue(int x) {
        if (!head) { cout << "List is empty" << endl; return; }
        while (head && head->data == x) {
            Node* tmp = head;
            head = head->next;
            delete tmp;
            cout << "Deleted value " << x << " from list" << endl;
            return;
        }
        Node* t = head;
        while (t->next && t->next->data != x) t = t->next;
        if (!t->next) { cout << "Value not found" << endl; return; }
        Node* tmp = t->next;
        t->next = tmp->next;
        delete tmp;
        cout << "Deleted value " << x << " from list" << endl;
    }

    void deleteByPosition(int pos) {
        if (!head) { cout << "List is empty" << endl; return; }
        if (pos < 0) { cout << "Invalid position" << endl; return; }
        if (pos == 0) {
            Node* tmp = head;
            head = head->next;
            delete tmp;
            cout << "Deleted node at position 0" << endl;
            return;
        }
        Node* t = head;
        int i = 0;
        while (t->next && i < pos - 1) { t = t->next; i++; }
        if (!t->next) { cout << "Position out of range" << endl; return; }
        Node* tmp = t->next;
        t->next = tmp->next;
        delete tmp;
        cout << "Deleted node at position " << pos << endl;
    }

    void display() {
        if (!head) { cout << "List is empty" << endl; return; }
        cout << "List: ";
        Node* t = head;
        while (t) { cout << t->data << " "; t = t->next; }
        cout << endl;
    }
};

int main() {
    SinglyLinkedList list;
    int x = 0;
    while(x<10){
        createNode(x);
        x++;
    }
    while (true) {
        cout << "1 Delete by value" << endl;
        cout << "2 Delete by position" << endl;
        cout<< "3 Display List" << endl;
        cout << "4 Exit" << endl;
        cout << "Choose option: ";
        int ch;
        if (!(cin >> ch)) break;
        if (ch == 1) {
            int x; cout << "Enter value to delete: "; cin >> x; list.deleteByValue(x);
        } else if (ch == 2) {
            int pos; cout << "Enter position (0-based) to delete: "; cin >> pos; list.deleteByPosition(pos);
        } else if (ch == 3) {
            list.display();
        } else if (ch == 4) {
            break;
        } else {
            cout << "Invalid choice" << endl;
        }
    }
    return 0;
}