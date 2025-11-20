#include <iostream>
using namespace std;
int main(){
    cout<<"Enter array size: ";
    int n; cin>>n;
    int a[100];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"Enter operation (1-insert 2-delete): ";
    int op; cin>>op;
    if(op==1){
        int val,pos; cout<<"Enter value and position: "; cin>>val>>pos;
        for(int i=n;i>pos;i--) a[i]=a[i-1];
        a[pos]=val; n++;
    } else if(op==2){
        int pos; cout<<"Enter position to delete: "; cin>>pos;
        for(int i=pos;i<n-1;i++) a[i]=a[i+1];
        n--;
    }
    cout<<"Result: ";
    for(int i=0;i<n;i++) cout<<a[i]<<(i+1==n? '\n' : ' ');
    return 0;
}
