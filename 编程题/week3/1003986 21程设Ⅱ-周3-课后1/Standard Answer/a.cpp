#include <string>
using namespace std;

class Cat{
    private:
        string name;
        int age;
    public:
        string cat_name;
        int cat_age;   // 类型别写错
        Cat(){}
        Cat(string n, int a){
           name = n;
           age = a;
        }
        string getName() const{return name;}
        int getAge() const{return age;}
        void setName(string n){name = n; cat_name=n;}
        void setAge(int a){age = a; cat_age = a;}
        void operator= (const Cat &c){
            name = c.name;
            age = c.age;
        }

};

class CatFamily{
    private:
        Cat c[100];
        int num = 0;

    public:
        bool add_a_cat(string name, int age){
            if(num <= 99){
                c[num].setAge(age);
                c[num].setName(name);
                ++num;
                return true;
            }
            else{
                return false;
            }
        }
        bool remove_a_cat(string name){
            if(num >0){
                int index;
                bool flag = false;
                for(int i=0; i<num; ++i){
                    if(c[i].getName() == name){
                        index = i;
                        flag = true;
                        break; 
                    }
                }
                if(!flag){return false;}  // no this cat
                else{
                    for(int i=index; i<num-1; ++i){
                        c[i] = c[i+1];
                    }
                    --num;  // 要记得加上
                    return true;
                }
            }
            else return false;  // no cat
        }
        bool has_cat(string cat_name){
            bool flag = false;
            for(int i=0; i<num; ++i){
                if(c[i].getName()== cat_name){
                    flag=true;
                    break;
                }
            }
            if(flag) return true;
            else return false;
        }
        string operator[] (int num) const{
            return c[num].getName();
        }
        int number_of_cats(){
            return num;
        }
        Cat get_cat(string cat_name){
            for(int i=0; i<num;++i){
                if(c[i].getName()==cat_name){
                    return c[i];
                }
            }
        }
};

