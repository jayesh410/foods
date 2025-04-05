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
    void displayMax(){
        cout<<"Number"<<num1<<"and"<<num2<<endl;
        cout<<"maximum : "<<((num1>num2)?num1:num2)<<endl;

    }
};
int main(){
 
    Number obj(12,20);
    obj.displayMax();
    return 0;
}