#include <iostream>
#include <cmath>
using namespace std;

class Point{
    private:
        int x, y;
    public:
        static int count;
        Point(){
            x=0;
            y=0;
            count++;
        }
        Point(int x, int y){
            this->x = x;
            this->y = y;
            count++;
        }
        ~Point(){
            count--;
        }

        void print(){
            cout <<'(' <<  x << ',' << y << ')' << endl;
        }
        bool judge(Point& p1, Point& p2){
            double dx1=p1.x-x;
            double dx2=p2.x-x;
            double dy1=p1.y-y;
            double dy2=p2.y-y;
            if(dx1==0&&dx2==0){
                return true;
            }
            else if(dx1==0||dx2==0){
                return false;
            }
            else if(dy1/dx1==dy2/dx2){
                return true;
            }
            else{
                return false;
            }
        }
};  // Point Class

int Point::count = 0;


int main(){
    Point a(1,1);
    a.print();
    cout<<Point::count<<endl;
    Point b(2,2), c(3,3);
    if(a.judge(b,c)){
        cout<<"True"<<endl;
    }
    else{
        cout << "False" << endl;
    }
    cout << Point::count << endl;
    return 0;
}

