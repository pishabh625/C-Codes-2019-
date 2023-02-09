#include <iostream>

using namespace std;

int c = 45; //Creating Global variable

int main()
{

    // ****************BUILT IN DATA TYPES*********************

    int a =1 , b =  1, c; //These Are The Local variables 
    c = a + b;

    cout << "\n\nThe Value Of local variable is :" << c << endl; // This "c" Will print The value of "local varible"

    // If we want to print the value of "global variable"
    // Than We have to use "::c" Scope Resolution Operator

    // as we know The Value of global variable(c) is : 45
    // and The value of local variable(c) is sum of  : a+b
    // For Example......
    cout << "The value of Global variable  is : " << ::c<<endl<<endl; // This "::c" Will print The value of "Global varible"






    // ****************Float,Double And Long double Literals*********************

    // literels Are used to Identify that when the value is float,double and long double 
    // The default varible for any decimal value is "double"

    float d = 32.2f;    //To assign the value as float we use "f" literel

    long double e= 32.2l; //To assign the value as long double we use "l" literel

    // we can also use "F" and "L" these are acceptable
     cout<<"This is an example of Literals : "<<endl;

    cout<<"The Value of d Is : "<<d<<endl<<"The value of e is : "<<e<<endl;
    // For Understanding This Let us use "sizeof" Keyword 
    // sizeof operator is used to print the size of varible which containing the values
    // we use values to determine the size of the variable

    cout<<"The size of 32.2   is : "<<sizeof(32.2)  <<"      double(default)"<<endl;
    cout<<"The size of 32.2f  is : "<<sizeof(32.2f) <<"      Float"<<endl;
    cout<<"The size of 32.2F  is : "<<sizeof(32.2F) <<"      Float"<<endl;
    cout<<"The size of 32.2l  is : "<<sizeof(32.2l) <<"     Long double"<<endl;
    cout<<"The size of 32.2L  is : "<<sizeof(32.2L) <<"     Long double"<<endl<<endl;




    //        ****************Referance variables*********************
    
    // reference variables are used to make a varible reference of another one as a reference
    // For example
    // Rishabh------>rishi------>rishu------>alian (But the person is only one)

    int x = 11;
    int & y = x; // we use "&" sign to make an reference variable of anothere variable

    cout<<"This is an example of Reference variable : "<<endl;
    // Now If we print the value of x and y the value is same that is : 11
    cout<<"The value of x is : "<<x<<endl;    
    cout<<"The value of y is : "<<y<<endl<<endl;   




    //        ****************Typecasting*********************
    // "Typecasting is the process of changing the value of one data type in anothere data type"

    int n = 45;   
    float m = 45.46;
    cout<<"This is an example of Typecasting : "<<endl;
    cout<<"The value of a is "<<(float)n<<endl;
    cout<<"The value of a is "<<float(n)<<endl;

    cout<<"The value of b is "<<(int)m<<endl;
    cout<<"The value of b is "<<int(m)<<endl;
    int o = int(m);

    cout<<"The expression is "<<n + m<<endl;
    cout<<"The expression is "<<n + int(m)<<endl;
    cout<<"The expression is "<<n + (int)m<<endl;
 



    return 0;
}