#include<iostream>
#include<iomanip>


using namespace std;

int main(){

    int ab = 34; 
    cout<<"The value of a was: "<<ab<<endl;
    ab = 45; 
    cout<<"The value of a is: "<<ab<<endl;


    //**********************Constants in C++**********************

    // we use constants in c++ To make an value of any variable Costant so we can not change the value anywhere
    // // we use "const" keyword to make costant variable
    // const int d = 3;
    // cout<<"The value of a was: "<<d<<endl;
    // d = 45; // You will get an error because a is a constant
    // cout<<"The value of a is: "<<d<<endl;

    // ********************Manipulators in C++*********************

    int a =3, b=78, cd=1233;
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of cd without setw is: "<<cd<<endl;

    cout<<"The value of a is: "<<setw(4)<<a<<endl;
    cout<<"The value of b is: "<<setw(4)<<b<<endl;
    cout<<"The value of cd is: "<<setw(4)<<cd<<endl;


    //********************Operator Precedence*********************
    
    // int c = (g*5)+h;
    int g=2,h=3;
    int c = ((((g*5)+h)-45)+87);
    cout<<c;
    return 0;

}