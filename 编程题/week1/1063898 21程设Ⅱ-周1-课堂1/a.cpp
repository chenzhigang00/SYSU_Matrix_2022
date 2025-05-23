#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if(b==0){
    cout << a+b<<endl << a-b<<endl<<a*b<<endl<<0<<endl;
    }
    else{
    cout << a+b<<endl << a-b<<endl<<a*b<<endl<<float(a)/b<<endl;
    }

    return 0;
}

