#include <iostream>
using namespace std;
int main(){
    cout<<"Enter number of nodes: ";
    int n; cin>>n;
    int tree[100];
    cout<<"Enter node values: ";
    for(int i=0;i<n;i++) cin>>tree[i];
    cout<<"Tree array: ";
    for(int i=0;i<n;i++) cout<<tree[i]<<(i+1==n? '\n' : ' ');
    return 0;
}
