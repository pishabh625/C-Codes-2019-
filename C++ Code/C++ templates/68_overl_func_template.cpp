#include<iostream>
using namespace std;
template <class T>
class Rishi{
    public :
        T data;
        Rishi(T a){
            data = a;
        }
        // void display(){
        //     cout<<data;
        // }
        void display();
};
template<class T>
void Rishi <T> :: display(){ //we can define out of the class like this
    cout<<data;
}

void func(int a){
    cout<<"I am Func(1) : "<<a<<endl;
}
template<class T>
void func(T a){
    cout<<"I am Templated Func(2) :"<<a<<endl;
}


int main(){
    // Rishi<int> r(5);
    // r.display();
    // Rishi<float> r(5.6);
    // cout<<r.data<<endl;
    // r.display();
    func(12);
    func(1.112);
return 0;
}