#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId; //4
    char favChar; //1
    float salary; //4
} ep;

union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};


int main(){
    // enum Meal{ breakfast, lunch, dinner};
    // Meal m1 = lunch;
    // cout<<(m1==2);
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner; 
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // m1.pounds = 12.6;
    // cout<<m1.pounds;

    // ep harry;
    // struct employee shubham;
    // struct employee rohanDas;
    // cout<<"Enter Your Id : ";
    // cin>>harry.eId;
    // cout<<"Enter Your favChar : ";
    // cin>>harry.favChar;
    // harry.salary = 120000000;
    // cout<<"The eId is "<<harry.eId<<endl; 
    // cout<<"The favChar is "<<harry.favChar<<endl; 
    // cout<<"The Salary is "<<harry.salary<<endl; 
    return 0;
}
