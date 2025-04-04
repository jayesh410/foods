#include<iostream>
using namespace std;

double volume(double side){
    return side*side*side;
}

double volume(double radius,double height){
    return 3.14*radius*radius*height;

}

double volume(double radius,bool isSphere){
    return (4.0/3.0)*3.14*radius*radius*radius;
}

int main (){
    double side,height,radius;
    cout<<"enter side lenght of cub"<<endl;
    cin>>side;
    cout<<"vol od cube"<<volume(side)<<endl;

    cout<<"enter radius and height";
    cin>>radius>>height;
    cout<<"volume of cylinder"<<volume(radius,height)<<endl;

    cout<<"enter radius of sphere ";
    cin>>radius;
    cout<<"vol of sphere:"<<volume(radius,true)<<endl;
    return 0;

}