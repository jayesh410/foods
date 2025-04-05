#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream sourcefile("jayesh.txt");
    ofstream destfile("dest.txt");

    if(!sourcefile){
        cout<<"erroe opeing";
        return 1;
    }
    if(!destfile){
        cout<<"error opeing";
        return 1;
    }

    string line;
    while(getline(sourcefile,line)){
        destfile<<line<<endl;
    }
    cout<<"coped successfully"<<endl;
    sourcefile.close();
    destfile.close();
    return 0;
}