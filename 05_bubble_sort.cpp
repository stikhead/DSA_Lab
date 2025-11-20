#include <iostream>
using namespace std;
int main()
{
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int p = 0; p < n - 1; p++)
    {
        for (int j = 0; j < n - p - 1; j++)
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}