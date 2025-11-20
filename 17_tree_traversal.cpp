#include <iostream>
using namespace std;
struct N
{
    int v;
    N *l;
    N *r;
};
void pre(N *t)
{
    if (!t)
        return;
    cout << t->v << " ";
    pre(t->l);
    pre(t->r);
}
void in(N *t)
{
    if (!t)
        return;
    in(t->l);
    cout << t->v << " ";
    in(t->r);
}
void post(N *t)
{
    if (!t)
        return;
    post(t->l);
    post(t->r);
    cout << t->v << " ";
}
int main()
{
    N *a = new N{1, nullptr, nullptr};
    a->l = new N{2, nullptr, nullptr};
    a->r = new N{3, nullptr, nullptr};
    pre(a);
    cout << endl;
    in(a);
    cout << endl;
    post(a);
}