#include <iostream>
using namespace std;

void swap(int& a, int& b){
    int t;
    t = a;
    a= b;
    b = t;
}

void use_value(int a, int b){
    swap(a,b);    
}

void use_pointer(int* a, int* b){
    swap(*a, *b);
}

void use_reference(int& a, int& b){
    swap(a,b);
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << a << b << endl; 
    use_value(a,b);
    cout << a << b << endl;
    use_pointer(&a, &b);
    cout << a<< b << endl;
    use_reference(a, b);
    cout << a << b << endl;
    return 0;
}


