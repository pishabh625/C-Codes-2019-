#include<iostream>
using namespace std;

template <class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}
template <class T1, class T2>
float funcAvarage(T1 x, T2 y){
    float avg = (x+y)/2;
    return avg;
}
int main(){
    cout<<" The avarage is : "<<funcAvarage(5, 5)<<endl;
    int a = 12, b = 13;
    swapp(a, b);
    cout<<a<<endl<<b<<endl;
    
return 0;
}