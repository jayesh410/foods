#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int num1=3,num2=5;
    cout<<"before swap"<<num1<<num2<<endl;
    swap(num1,num2);
    cout<<"after"<<num1<<num2;
    return 0;

}