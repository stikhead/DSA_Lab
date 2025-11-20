#include <iostream>
using namespace std;
struct N
{
    int v;
    N *next;
};
int main()
{
    N *f = nullptr, *r = nullptr;
    int ch, x;
    while (cin >> ch)
    {
        if (ch == 1)
        {
            cin >> x;
            N *t = new N();
            t->v = x;
            t->next = nullptr;
            if (!f)
                f = r = t;
            else
            {
                r->next = t;
                r = t;
            }
        }
        else if (ch == 2)
        {
            if (f)
            {
                N *t = f;
                f = f->next;
                if (!f)
                    r = nullptr;
                delete t;
            }
        }
        else if (ch == 3)
        {
            if (f)
                cout << f->v << " ";
        }
        else if (ch == 4)
        {
            for (N *t = f; t; t = t->next)
                cout << t->v << " ";
        }
    }
}