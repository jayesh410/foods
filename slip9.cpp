#include<iostream>
using namespace std;
class Item{
    int Item_code;
    string Item_name;
    float Item_price;
    static int count;
    public:
    Item(){
        count++;
    }
    void acceptDetails(){
        cout<<"enter the code";
        cin>>Item_code;
        cout<<"enter the name";
        cin>>Item_name;
        cout<<"enter the price";
        cin>>Item_price;
    }
    void displayDetails(){
        cout<<"Iteam code"<<Item_code;
        cout<<"Item Name"<<Item_name;
        cout<<"Item price"<<Item_price;
    }
    static void getCount(){
        cout<<"total number of item:";
    }

};
int Item::count=0;
int main(){
    int n;
    cout<<"enter the numbber of item";
    cin>>n;
    Item items[n];
    for(int i=0;i<n;i++){
        cout<<"enter details for item"<<(i+1)<<":"<<endl;
        items[i].acceptDetails();
    }


cout << "\n===== Item Details =====" << endl;
for (int i = 0; i < n; i++) {
cout << "\nItem " << (i + 1) << ":" << endl;
items[i].displayDetails();
}
Item::getCount();
return 0;
}