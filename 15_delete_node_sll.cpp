#include <iostream>
using namespace std;
struct N
{
    int v;
    N *next;
};
int main()
{
    N *h = nullptr;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        N *t = new N();
        t->v = x;
        t->next = h;
        h = t;
    }
    int pos;
    cin >> pos;
    if (pos == 0 && h)
    {
        N *t = h;
        h = h->next;
        delete t;
    }
    else
    {
        N *t = h;
        for (int i = 0; i < pos - 1 && t; i++)
            t = t->next;
        if (t && t->next)
        {
            N *d = t->next;
            t->next = d->next;
            delete d;
        }
    }
    for (N *t = h; t; t = t->next)
        cout << t->v << " ";
}