#include <iostream>
#include <iomanip>
using namespace std;

class Rectangle{
    private:
        double width = 1, height = 1;
    public:
        Rectangle(){
            width = height = 1;
        }
        Rectangle(double width, double height){
            this->width = width;
            this->height = height;
        }
        double getWidth() const{
            return width;
        }
        double getHeight() const{
            return height;
        }
        void setWidth(double w){
            width = w;
        }
        void setHeight(double h){
            height = h;
        }
        double getArea() const{
            return width * height;
        }
        double getPerimeter() const{
            return 2*(width+height);
        }
};

int main(){
    Rectangle r(3.14159, 2.71828);
    cout << fixed << setprecision(2);
    cout << "Area: " << r.getArea() << endl;
    cout << "Perimeter: " << r.getPerimeter() << endl;
    return 0;
}


