#include<iostream>
#include<fstream>
using namespace std;


int main(){
    ifstream sourcefile("sample.txt");
    ofstream destfile("destination.txt");

    if (!sourcefile)
    {
        cout<<"error in opening file";
        return 1;
    }
    if (!destfile){
        cout<<"error in opening file";
        return 1;
    }
    string line;
    while(getline(sourcefile,line)){
        destfile<<line<<endl;
    }
    cout<<"file copied succesfully"<<endl;
    sourcefile.close();
    destfile.close();
    return 0;
}