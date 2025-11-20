#include <iostream>
using namespace std;
int main(){
    cout<<"Enter array size: ";
    int n; cin>>n;
    int a[100];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=1;i<n;i++){
        int key=a[i], j=i-1;
        while(j>=0 && a[j]>key){ a[j+1]=a[j]; j--; }
        a[j+1]=key;
    }
    cout<<"Sorted: ";
    for(int i=0;i<n;i++) cout<<a[i]<<(i+1==n? '\n' : ' ');
    return 0;
}
