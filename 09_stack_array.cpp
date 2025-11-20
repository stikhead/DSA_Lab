#include <iostream>
using namespace std;
int main(){ int s[100],top=-1,ch,x; while(cin>>ch){ if(ch==1){ cin>>x; s[++top]=x; } else if(ch==2){ if(top>=0) top--; } else if(ch==3){ if(top>=0) cout<<s[top]<<" "; } else if(ch==4){ for(int i=0;i<=top;i++) cout<<s[i]<<" "; } } }