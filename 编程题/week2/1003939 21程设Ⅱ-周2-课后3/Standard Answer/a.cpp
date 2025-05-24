#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    int N;
    cin >> N;
    for(int i=0; i<N;++i){
        string name, code;
        double cost;
        cin >> name >> code >> cost;
        cout << left << setw(15) << name;
        cout << left << setw(15) << code;
        cout << right << setw(10) << fixed << setprecision(2)  <<fixed << cost<<endl;
    }
    return 0;
}


