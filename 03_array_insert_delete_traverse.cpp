#include <iostream>
using namespace std;
int main()
{
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int pos, val;
    cin >> pos >> val;
    if (pos >= 0 && pos <= n)
    {
        for (int i = n; i > pos; i--)
            a[i] = a[i - 1];
        a[pos] = val;
        n++;
    }
    cin >> pos;
    if (pos >= 0 && pos < n)
    {
        for (int i = pos; i < n - 1; i++)
            a[i] = a[i + 1];
        n--;
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}