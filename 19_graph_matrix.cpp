#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int g[10][10];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> g[i][j];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << g[i][j] << " ";
        cout << endl;
    }
}