#include<iostream>
#include<string>
using namespace std;
class PrintData{
    public:
    void print(int val){
        cout<<"value"<<val<<endl;
    }
    void print(string str){
        cout<<"value:\""<<str<<"\""<<endl;
    }
};
int main() {
    PrintData obj;
    obj.print(10);
    obj.print("hi");
    return 0;
    
}