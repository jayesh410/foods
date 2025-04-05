#include<iostream>
using namespace std;
bool isPrime(int num){
    if(num<2)
    return false;
    for(int i=2;i*i<=num;i++){
        if(num%i==0)
        return false; 
}
return true;

}
int main(){
    int num;
    cout<<"enter the number";
    cin>>num;
    if(isPrime(num))
    cout<<num<<"prime"<<endl;
    else
    cout<<num<<"not prime"<<endl;
    return 0;
    
}