#include <iostream>
using namespace std;

int main(){
    int row, col;
    cin >> row >> col;
    int** a = new int*[row];   // 指向指针的指针，被指向的指针指向一个数组，该数组有row个int*元素
    for(int i =0; i<row; ++i){
        a[i] = new int[col];  // 每个int*元素指向一个有col元素数组的首地址
    }
    for(int i = 0; i< row; ++i)
        for(int j=0; j< col; ++j)
            cin >> a[i][j];
    
    for(int i = 0; i< row; ++i)
        for(int j=0; j< col; ++j)
            cout << a[i][j] << (j==col-1? '\n' : ' ' );
    
    for(int i=0; i< row; ++i)
        delete[] a[i];
    delete[] a;
    return 0;
}
