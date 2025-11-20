#include <iostream>
using namespace std;
int main()
{
    int n, a[100], x;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> x;
    int l = 0, r = n - 1, f = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
        {
            f = m;
            break;
        }
        else if (a[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    if (f == -1)
        cout << "Not found";
    else
        cout << "Found at index " << f;
}