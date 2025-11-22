#include <iostream>
#include <vector>
using namespace std;

class Graph {
    int n;
    vector<vector<int>> mat;
public:
    Graph(int nodes) {
        n = nodes;
        mat.assign(n, vector<int>(n, 0));
    }

    void addEdge(int u, int v, int w=1) {
        if (u<0 || u>=n || v<0 || v>=n) {
            cout << "Invalid nodes\n";
            return; 
        }
        mat[u][v] = w;
        mat[v][u] = w;
        cout <<u<<"-"<<v<<" Added edge\n";
    }

    void display() {
        cout << "Adjacency matrix:\n";
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j){
                cout << mat[i][j] << " ";
            }
        }
    }
};

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;
    Graph g(n);
    while (true) {
        cout << "1 Add edge\n";
        cout << "2 Display matrix\n";
        cout << "3 Exit\n";
        cout << "Choose option: ";
        int ch; cin >> ch;
        if (ch == 1) {
            int u,v;
            cout << "Enter u v: ";
            cin >> u >> v;
            g.addEdge(u,v);
        } else if (ch == 2) {
            g.display();
        } else if (ch == 3) break;
        else cout << "Invalid choice\n";
    }
    return 0;
}
