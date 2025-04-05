#include<iostream>
using namespace std;
class Employee{
    int salary;
    public:
    Employee(int s){
        salary=s;

    }
    void display(){
        cout<<"salary"<<salary;
    }
    Employee operator--(){
        --salary;
        return *this;
    }
    Employee operator--(int){
        Employee temp=*this;
        salary--;
        return 0;
    }
};
int main(){
    Employee emp(5000);
    cout<<"initial";
    emp.display();
    --emp;
    cout<<"after pre-decrement";
    emp.display();
    emp--;
    cout<<"after post-decrement";
    emp.display();
    return 0;
}