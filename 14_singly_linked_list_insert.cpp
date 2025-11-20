#include <iostream>
using namespace std;
struct N{ int v; N*next; };
int main(){ N*h=nullptr; int ch,x,pos; while(cin>>ch){ if(ch==1){ cin>>x; N*t=new N(); t->v=x; t->next=h; h=t; }
else if(ch==2){ cin>>x; if(!h){ N*t=new N(); t->v=x; t->next=nullptr; h=t; } else{ N*t=h; while(t->next)t=t->next; N*n=new N(); n->v=x; n->next=nullptr; t->next=n;} }
else if(ch==3){ cin>>x>>pos; N*n=new N(); n->v=x; if(pos==0){ n->next=h; h=n; } else{ N*t=h; for(int i=0;i<pos-1&&t;i++) t=t->next; if(t){ n->next=t->next; t->next=n; } } }
else if(ch==4){ for(N*t=h;t;t=t->next) cout<<t->v<<" "; } } }