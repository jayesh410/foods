#include<iostream>
using namespace std;
inline int findMin(int a,int b){
    return (a<b)?a:b;
}
inline int findMax(int a,int b){
    return (a<b)?b:a;
}
int main(){
    int num1,num2;
    cout<<"enter the number1 nad number2";
    cin>>num1>>num2;
    cout<<"min"<<findMin(num1,num2);
    cout<<"max"<<findMax(num1,num2);
    return 0;
}