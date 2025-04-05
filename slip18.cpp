#include<iostream>
using namespace std;
int main(){
    int n,totalSum=0;
    cout<<"enter the value";
    cin>>n;
    for(int i=1;i<=n;i++){
        totalSum+=(i*(i+1)/2);
    }
    cout<<"sum of the series:"<<totalSum<<endl;
    return 0;
}