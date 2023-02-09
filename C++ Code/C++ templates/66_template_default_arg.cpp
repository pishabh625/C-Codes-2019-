#include<iostream>
using namespace std;
template <class T1 = int, class T2 = float, class T3 = char>
class Rishi{
    public :
        T1 a;
        T2 b;
        T3 c;
        Rishi(T1 x,T2 y,T3 z){
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout<<"The Parameter a is : "<<a<<endl;
            cout<<"The Parameter b is : "<<b<<endl;
            cout<<"The Parameter c is : "<<c<<endl;
        }
};
int main(){
    Rishi<> r(1, 1.1, 'R');
    r.display();
    cout<<endl;
    Rishi<float, int, int> p(1.000010, 1, 4);
    p.display();
    
return 0;
}