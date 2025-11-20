#include <iostream>
using namespace std;
int main(){ int r,c,i,j; cin>>r>>c>>i>>j; int base=1000; int addr_row=base+(i*c+j)*4; int addr_col=base+(j*r+i)*4;
cout<<addr_row<<" "<<addr_col; }