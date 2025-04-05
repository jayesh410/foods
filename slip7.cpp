#include<iostream>
using namespace std;
class Number{
    int num1,num2;
    public:
    Number(){
        num1=0;
        num2=0;
    }
    Number(int n1,int n2){
        num1=n1;
        num2=n2;

    }
    void DisplayMax(){
        if(num1>num2)
        cout<<"num1 greter";
        else
        cout<<"num2 greter";
    }

};
int main (){
    Number obj1;
    Number obj2(10,20);
    obj2.DisplayMax();
    return 0;
}