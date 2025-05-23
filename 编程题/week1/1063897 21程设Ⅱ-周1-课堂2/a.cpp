#include <iostream>
using namespace std;

int inflag;  // global

namespace mfc{
    int inflag;  // mfc::inflag
}

namespace owl{
    int inflag; // owl::inflag
}

void Handle(){
    owl::inflag--;
    mfc::inflag++;
    ::inflag %= 100;
}

int main(){
    Handle();
    Handle();
    cout << inflag << endl;
    cout << owl::inflag << endl;
    cout << mfc::inflag << endl;
    return 0;
}

