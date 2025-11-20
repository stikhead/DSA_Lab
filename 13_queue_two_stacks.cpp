#include <iostream>
using namespace std;
int main(){ int s1[100],s2[100],t1=-1,t2=-1,ch,x; while(cin>>ch){ if(ch==1){ cin>>x; s1[++t1]=x; }
else if(ch==2){ if(t2<0){ while(t1>=0) s2[++t2]=s1[t1--]; } if(t2>=0) t2--; }
else if(ch==3){ if(t2<0){ while(t1>=0) s2[++t2]=s1[t1--]; } if(t2>=0) cout<<s2[t2]<<" "; }
else if(ch==4){ for(int i=0;i<=t1;i++) cout<<s1[i]<<" "; for(int i=t2;i>=0;i--) cout<<s2[i]<<" "; } } }