#include <iostream>
using namespace std;

class Object{
    private:
        int id;
        static int count;
    public:
        Object(int id){
            this->id = id;
            count++;
            print1();
        }
        ~Object(){
            count--;
            print2();
        }
        void print1(){
            cout << "Object " << id << " is created, we've got " 
                << count << " object(s) now!" << endl; 
        }
        void print2(){
            cout << "Object " << id << " is deleted, we've got " 
                << count << " object(s) now!" << endl; 
        }
};

int Object::count = 0;

int main()
{
    Object* o[4] = {new Object(1), new Object(2), new Object(3), new Object(4)};
    for(int i=0; i<4; ++i)
        if(i%2==0)
            delete o[i];
    delete o[1];   // 只能delete new 出来的
    delete o[3];
    return 0;
}

