#include <iostream>
using namespace std;
int main(){ int n; cin>>n; int g[10][10]; for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>g[i][j];
int s; cin>>s; int q[100],f=0,r=0,vis[10]={0}; q[r]=s; vis[s]=1;
while(f<=r){ int u=q[f++]; cout<<u<<" "; for(int v=0;v<n;v++) if(g[u][v]&&!vis[v]){ vis[v]=1; q[++r]=v; } }
}