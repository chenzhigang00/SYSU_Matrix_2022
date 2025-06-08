#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Book
{
    string name;
    string code;
    double cost;
public:
    Book(string s,string c,double co):name(s),code(c),cost(co){} // 初始化参数列表
    friend ostream &operator<< (ostream & os, const Book & b){
        os << right << setw(15) << b.name;
        os << right << setw(15) << b.code;
        os << right << setw(15) << fixed << setprecision(6) << b.cost << endl;
        return os;
    }
};

ostream & leftform (ostream& strm) {
 strm << resetiosflags(ios::fixed);  // 清除之前的fixed格式
 strm.flush();  // 强制刷新输出流的缓冲区
 strm << setiosflags(ios::left);
 strm << "left :";
 strm << setw(15);
 strm << setiosflags(ios::fixed);
 strm << setprecision(2);
 return strm;
}

ostream & rightform (ostream& strm) {
 strm << resetiosflags(ios::fixed);
 strm.flush();
 strm << setiosflags(ios::right);
 strm << "right:";
 strm << setw(15);
 strm << setiosflags(ios::fixed);
 strm << setprecision(2);
 return strm;
}



int main() {
    int N;
    string name;
    string code;
    double cost;
    cin >> N;
    int i = 0;
    Book *books[N];   // 指针使用前要分配内存空间

     for(i=0;i<N;i++){
        cin >> name >> code >> cost;
        books[i] = new Book(name, code, cost);
    }
    for(i=0;i<N;i++){
        cout << "-----:" << *books[i];
    }
    for(i=0;i<N;i++){
        cout << leftform << *books[i];
    }
    for(i=0;i<N;i++){
        cout << rightform << *books[i];
    }
}




