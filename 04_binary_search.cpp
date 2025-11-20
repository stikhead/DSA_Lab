#include <iostream>
using namespace std;
int main(){
    cout<<"Enter array size: ";
    int n; cin>>n;
    int a[100];
    cout<<"Enter sorted elements: ";
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"Enter key: ";
    int key; cin>>key;
    int l=0,r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==key){ cout<<"Found at index "<<m<<"\n"; return 0;}
        if(a[m]<key) l=m+1; else r=m-1;
    }
    cout<<"Not found\n";
    return 0;
}
