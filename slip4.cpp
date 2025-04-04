#include<iostream>
using namespace std;

inline double areaCircle(double radius){
    return 3.14*radius*radius;
}
inline double areaSquare(double side){
    return side*side;

}

inline double areaReactangle(double lenght,double width){
    return lenght*width;

}

int main (){
    double radius,side,lenght,width;
    cout<<"enter the radius of circle";
    cin>>radius;
    cout<<"area of circle"<<areaCircle(radius)<<endl;

    cout<<"enter the side of the square";
    cin>>side;
    cout<<"square"<<areaSquare(side)<<endl;

    cout<<"enter lenght and width";
    cin>>lenght>>width;
    cout<<"area of reactangle"<<areaReactangle(lenght,width)<<endl;

    return 0;
}