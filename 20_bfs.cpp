#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(const vector<vector<int>>& mat, int start) {
    int n = mat.size();
    vector<bool> visited(n, false);
    queue<int> q;
    visited[start] = true;
    q.push(start);
    cout << "BFS order: ";
    while (!q.empty()) {
        int u = q.front(); q.pop();
        cout << u << " ";
        for (int v = 0; v < n; ++v) {
            if (mat[u][v] && !visited[v]) {
                visited[v] = true;
                q.push(v);
            }
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n,0));
    cout << "Enter number of edges: ";
    int m; cin >> m;
    cout << "Enter edges (u v) for undirected graph:" << endl;
    for (int i = 0; i < m; ++i) {
        int u,v; cin >> u >> v;
        if (u>=0 && u<n && v>=0 && v<n) { mat[u][v] = 1; mat[v][u] = 1; }
    }
    cout << "Enter start node for BFS: ";
    int s; cin >> s;
    bfs(mat, s);
    return 0;
}
