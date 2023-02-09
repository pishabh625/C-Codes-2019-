#include <iostream>
#include <cmath>
using namespace std;
class SimpleCalculator
{
protected:
    int data1;
    int data2;

public:
    void setData1(int, int);
    void getData1();
};

void SimpleCalculator ::setData1(int d, int c)
{
    data1 = d;
    data2 = c;
    getData1();
}
void SimpleCalculator ::getData1()
{
    cout << "**********************This Is SimpleCalculator Class*****************\n"
         << endl;
    cout << "The Simple Calculations Are : " << endl;
    cout << "The Sum Is : " << data1 + data2 << endl;
    cout << "The Substraction Is : " << data1 - data2 << endl;
    cout << "The Multiplication Is : " << data1 * data2 << endl;
    cout << "The Division Is : " << float(data1) / float(data2) << endl
         << endl;
}
class ScintificCalc
{
protected:
    long double data3;
    long double data4;

public:
    void setData2(int a, int b)
    {
        data3 = a;
        data4 = b;
        getData2();
    }
    void getData2();
};
void ScintificCalc ::getData2()
{
    cout << "*************This Is Class Scientific****************\n"
         << endl;
    cout << "The value of Sin(" << data3 << ") is : " << sin(data3) << endl;
    cout << "The value of Cos(" << data4 << ") is : " << cos(data4) << endl;
    cout << "The value of sprt(" << data3 << ") is : " << sqrt(data3) << endl;
    cout << "The value of sprt(" << data4 << ") is : " << sqrt(data4) << endl;
    cout << "The value of log10(" << (data3) << ") is : " << log10(data3) << endl;
    cout << "The value of log10(" << (data4) << ") is : " << log10(data4) << endl
         << endl;
}
class HybrideCalc : public SimpleCalculator, public ScintificCalc
{
public:
    void printall();
};
void HybrideCalc ::printall()
{
    cout << "*************This Is Class Hybrid****************\n\n";
    cout << "Data Of Class SimpeCalculator :" << endl;
    cout << "The Simple Calculations Are : " << endl;
    cout << "The Sum Is : " << data1 + data2 << endl;
    cout << "The Substraction Is : " << data1 - data2 << endl;
    cout << "The Multiplication Is : " << data1 * data2 << endl;
    cout << "The Division Is : " << float(data1) / float(data2) << endl
         << endl;

    cout << "Data Of Class ScientificCalculator :" << endl;
    cout << "The value of Sin(" << data3 << ") is : " << sin(data3) << endl;
    cout << "The value of Cos(" << data4 << ") is : " << cos(data4) << endl;
    cout << "The value of sprt(" << data3 << ") is : " << sqrt(data3) << endl;
    cout << "The value of sprt(" << data4 << ") is : " << sqrt(data4) << endl;
    cout << "The value of log10(" << (data3) << ") is : " << log10(data3) << endl;
    cout << "The value of log10(" << (data4) << ") is : " << log10(data4) << endl
         << endl;
}

int main()
{
    HybrideCalc Rishi;
    Rishi.setData1(14, 7);
    Rishi.setData2(2, 30);
    Rishi.printall();

    return 0;
}
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and perfoms +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and perfoms any four scientific operation of your chioice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?-----> Multiple
    Q2. Which mode of Inheritance are you using?-----> Protected
    Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.----->Done
    Q4. How is code reusability implemented?-----> using multiple inheritance
#include <iostream>
#include <cmath>
using namespace std;
class SimpleCalculator {
    int a, b;
    public:
        void getDataSimple()
        {
            cout<<"Enter the value of a"<<endl;
            cin>>a;
            cout<<"Enter the value of b"<<endl;
            cin>>b;
        }

        void performOperationsSimple(){
            cout<<"The value of a + b is: "<<a + b<<endl;
            cout<<"The value of a - b is: "<<a - b<<endl;
            cout<<"The value of a * b is: "<<a * b<<endl;
            cout<<"The value of a / b is: "<<a / b<<endl;
        }
};

class ScientificCalculator{
    int a, b;

    public:
        void getDataScientific()
        {
            cout << "Enter the value of a" << endl;
            cin >> a;
            cout << "Enter the value of b" << endl;
            cin >> b;
        }

        void performOperationsScientific()
        { 
            cout << "The value of cos(a) is: " << cos(a) << endl;
            cout << "The value of sin(a) is: " << sin(a) << endl;
            cout << "The value of exp(a) is: " << exp(a) << endl;
            cout << "The value of tan(a) is: " << tan(a) << endl;
        }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator{
    
};
int main()
{
    // SimpleCalculator calc;
    // ScientificCalculator calc;
    // calc.getData();
    // calc.performOperations();
    HybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationsScientific();
    calc.getDataSimple();
    calc.performOperationsSimple();
    
    return 0;
}
*/