#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int>& a, int n, int i) {
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if (l < n && a[l] > a[largest]) largest = l;
    if (r < n && a[r] > a[largest]) largest = r;
    if (largest != i) {
        swap(a[i], a[largest]);
        heapify(a, n, largest);
    }
}

void buildMaxHeap(vector<int>& a) {
    int n = a.size();
    for (int i = n/2 - 1; i >= 0; --i) heapify(a, n, i);
}

int extractMax(vector<int>& a) {
    if (a.empty()) { cout << "Heap is empty" << endl; return -1; }
    int n = a.size();
    int root = a[0];
    a[0] = a[n-1];
    a.pop_back();
    heapify(a, a.size(), 0);
    return root;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) cin >> a[i];
    buildMaxHeap(a);
    cout << "Max-heap array: ";
    for (int x : a) cout << x << " ";
    cout << endl;
    cout << "Extract max? 1 yes 0 no: ";
    int ch; cin >> ch;
    if (ch == 1) {
        int m = extractMax(a);
        if (m != -1) cout << "Extracted max: " << m << endl;
        cout << "Heap after extraction: ";
        for (int x : a) cout << x << " ";
        cout << endl;
    }
    return 0;
}
