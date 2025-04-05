#include<iostream>
#include<string>
using namespace std;
class Mobile
{
    int mobile_id;
    string mobile_Name;
    double mobile_Price;
    public:

    Mobile(int id,string name,double price)
    {
        mobile_id=id;
        mobile_Name=name;
        mobile_Price=price;  
    }
    void display(){
        cout<<"id"<<mobile_id<<endl;
        cout<<"name"<<mobile_Name<<endl;
        cout<<"price"<<mobile_Price<<endl;
    }
};

int main(){
    Mobile mob(101,"samsung",999.99);
    cout<<"Mobile Deatil:\n";
    mob.display();
    return 0;
}