#include<iostream>
using namespace std;
class Date{
    int dd,mm,yyyy;
    
    string month[12]={"Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        public:
        Date(int day,int month,int year){
            if(month < 1||month > 12){
                cout<<"invalid month";
                mm=1;
            }
            else{
                mm=month;
            }
            dd=day;
            yyyy=year;
        }
        void DisplayDate(){
            cout << dd << "-" << month[mm-1] << "-" << yyyy << endl;
        }
};
int main(){
    int day,month,year;
    cout<<"enter the dat (dd mm yyyy)";
    cin>>day>>month>>year;
    Date d1(day,month,year);
    d1.DisplayDate();
    return 0;
}