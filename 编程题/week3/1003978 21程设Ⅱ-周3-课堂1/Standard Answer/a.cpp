#include <iostream>
using namespace std;

class Account{
    private:
        int id = 0;
        double balance = 0;
        double annualInterestRate = 0;
    public:
        Account(){}
        int getID() const{
            return id;
        }
        void setID(int i){
            id = i;
        }
        double getBalance() const{
            return balance;
        }
        void setBalance(double b){
            balance = b;
        }
        double getAnnualInterestRate() const{
            return annualInterestRate;
        }
        void setAnnualInterestRate(double a){
            annualInterestRate = a;
        }
        double getMonthlyInterestRate(){
            return annualInterestRate/12;
        }
        void withDraw(double amount){
            amount <= balance ? balance -= amount : balance = 0; 
        }
        void deposit(double amount){
            balance += amount;
        }
        


};


int main(){


    return 0;
}
