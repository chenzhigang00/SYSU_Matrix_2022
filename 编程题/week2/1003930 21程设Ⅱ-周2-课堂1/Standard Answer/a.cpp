#include <iostream>
#include <string>
using namespace std;

class Cat{
    private:
        int age;
        string name;
    public:
        int get_age() const{
            return age;
        }

        string get_name() const{
            return name;
        }    

        void set_age(int age){
            this->age = age;
        }

        void set_name(const string &name){
            this->name = name;
        }
};   // Cat class

int main(){
    Cat c;
    c.set_age(4);
    c.set_name("KLUBZSW");
    cout << "This is my cat:" << c.get_name() << " "<< c.get_age()<< endl;
    return 0;
}



