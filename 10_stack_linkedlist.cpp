#include <iostream>
using namespace std;
struct N{ int v; N*next; };
int main(){ N*top=nullptr; int ch,x; while(cin>>ch){ if(ch==1){ cin>>x; N*t=new N(); t->v=x; t->next=top; top=t; }
else if(ch==2){ if(top){ N*t=top; top=top->next; delete t;} }
else if(ch==3){ if(top) cout<<top->v<<" "; }
else if(ch==4){ for(N*t=top;t;t=t->next) cout<<t->v<<" "; } } }