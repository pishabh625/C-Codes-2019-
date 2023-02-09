#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    // For Writing In File >>>>>>>
    ofstream out;
    out.open("sample60.txt");
    string name;
    cout<<"Enter Your Name : ";  
    getline(cin, name);
    out<<"Your Name Is " + name;
    out.close();
    
    // For Rading From File >>>>>>
    ifstream Rin;
    Rin.open("sample60.txt");
    string st;
    while(Rin.eof()==0){
        getline(Rin , st);
        cout<<"The Content Of File is : "<<st;
    }
    Rin.close();
    
    
return 0;
}