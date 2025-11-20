#include <iostream>
using namespace std;
int main(){
    cout<<"Enter base address, rows, cols, row_index, col_index: ";
    int base, row, col, r, c;
    cin>>base>>r>>c>>row>>col;
    int addr = base + (row*c + col)*sizeof(int);
    cout<<"Address: "<<addr<<"\n";
    return 0;
}
