#include <iostream>
#include "Date.h"
#include <string>
using namespace std;

string month_string[12] ={"January", "Feburary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"}; 

DATE::DATE(){
    year = 1970;
    month = 1;
    day = 1;
    Print();
}

DATE::DATE(int newYear, int newMonth, int newDay){
    year = newYear;
    month = newMonth;
    day = newDay;
    Print();
}

DATE::~DATE(){
    cout << "The DATE CLASS will be destroyed." << endl;
}

void DATE::Print() const{
    cout << month_string[month-1] << " "  
    << day << ", " << year << endl;    
}

int main(){
    DATE d1;
    DATE d2(1970, 1, 2);
    DATE d3(2020, 3, 1);
    DATE d4(2020, 4, 30);
    DATE d5(1971, 12, 20);
    return 0;
}




