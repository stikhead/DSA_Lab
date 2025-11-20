#include <iostream>
#include <vector>
using namespace std;

void preorder(const vector<int>& tree, int i) {
    if (i >= (int)tree.size() || tree[i] == -1) return;
    cout << tree[i] << " ";
    preorder(tree, 2*i + 1);
    preorder(tree, 2*i + 2);
}

void inorder(const vector<int>& tree, int i) {
    if (i >= (int)tree.size() || tree[i] == -1) return;
    inorder(tree, 2*i + 1);
    cout << tree[i] << " ";
    inorder(tree, 2*i + 2);
}

void postorder(const vector<int>& tree, int i) {
    if (i >= (int)tree.size() || tree[i] == -1) return;
    postorder(tree, 2*i + 1);
    postorder(tree, 2*i + 2);
    cout << tree[i] << " ";
}

int main() {
    int n;
    cout << "Enter number of nodes in array representation: ";
    cin >> n;
    vector<int> tree(n);
    cout << "Enter node values (-1 for empty): ";
    for (int i = 0; i < n; ++i) cin >> tree[i];
    cout << "Preorder: ";
    preorder(tree, 0);
    cout << endl;
    cout << "Inorder: ";
    inorder(tree, 0);
    cout << endl;
    cout << "Postorder: ";
    postorder(tree, 0);
    cout << endl;
    return 0;
}
