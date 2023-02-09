 // header files :

 //     Header file are files which increase the Functionality of our program
 //     There is two types of Header files ::

 //     1. System Header files       : These Files Comes With System Compiler
 //        Syntax                    : #include <name_of_header_file>

 //     2. User Difined Header Files : These files are Written by The Programmer 
 //        Syntax                    : #include "name_Of_header_file" 

 //     And Use "Cppreference" website to know about the System header file 

#include<iostream>

using namespace std;

int main(){
     int a =3,b=2;
    cout<<"Operators in C++"<<endl;
    //  operators :
    // Operators are used to perform different type of Operation in c++ 
    cout<<"There is Five Types Of Operators :"<<endl;   
    cout<<"1.ARTHEMATIC  OPERATOR"<<endl;   
    cout<<"3.COMPARISION OPERATOR"<<endl;   
    cout<<"4.LOGICAL     OPERATOR"<<endl;
    cout<<"2.ASSIGNMENT  OPERATOR"<<endl; 
    cout<<"5.INCREMENT AND DECREMENT OPERATOR"<<endl<<endl;  
    cout<<"Let's us asume The value of (a = 3) and (b = 2) For understanding all operators : "<<endl<<endl;


    // Arthematic operator   
    cout<<"These Following Are the Arthematic Operator :"<<endl<<endl;
    cout<<"The Value Of a + b is :"<<(a + b)<<endl;
    cout<<"The Value Of a - b is :"<<(a - b)<<endl;
    cout<<"The Value Of a * b is :"<<(a * b)<<endl;
    cout<<"The Value Of a / b is :"<<(a / b)<<endl;
    cout<<"The Value Of a % b is :"<<(a % b)<<endl<<endl;



    // Comparision(Relation) Operator
    cout<<"These Following Are the Comparision Operator :"<<endl<<endl;
    cout<<"The Value Of a <  b is :"<<(a < b)<<endl;
    cout<<"The Value Of a >  b is :"<<(a > b)<<endl;
    cout<<"The Value Of a <= b is :"<<(a <= b)<<endl;
    cout<<"The Value Of a == b is :"<<(a == b)<<endl;
    cout<<"The Value Of a >= b is :"<<(a >= b)<<endl;
    cout<<"The Value Of a != b is :"<<(a != b)<<endl<<endl;


    // Logical Operator
    cout<<"These Following Are the Logical Operator :"<<endl<<endl;
    cout<<"The Value Of Logical operator AND(&&)is : ((a < b)  && (a==b)) : "<<((a < b) && (a==b))<<endl;
    cout<<"The Value Of Logical operator OR(||) is : ((a < b)  || (a==b)) : "<<((a < b) || (a==b))<<endl;
    cout<<"The Value Of Logical operator NOT(!) is : !(a == b)            : "<<(!(a==b))<<endl<<endl;
    
   
    // assigment operator
    cout<<"These Following are the Examlple Assignment Operator(=)"<<endl;
    cout<<"(=) Sign is used To assign The value"<<endl;
    cout<<"int a = 1"<<endl;
    cout<<"int b = 2"<<endl<<endl;


    // Increment and decrement operator
    cout<<"These Following Are the Increment and decrement Operator :"<<endl<<endl;
    cout<<"The Value Of  a++  is :"<<( a++ )<<endl;
    cout<<"The Value Of  ++a  is :"<<( ++a )<<endl;
    cout<<"The Value Of  a--  is :"<<( a-- )<<endl;
    cout<<"The Value Of  --a  is :"<<( --a )<<endl<<endl;

 
  return 0;
}