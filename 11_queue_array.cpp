#include <iostream>
using namespace std;
int main()
{
    int q[100], f = 0, r = -1, ch, x;
    while (cin >> ch)
    {
        if (ch == 1)
        {
            cin >> x;
            q[++r] = x;
        }
        else if (ch == 2)
        {
            if (f <= r)
                f++;
        }
        else if (ch == 3)
        {
            if (f <= r)
                cout << q[f] << " ";
        }
        else if (ch == 4)
        {
            for (int i = f; i <= r; i++)
                cout << q[i] << " ";
        }
    }
}