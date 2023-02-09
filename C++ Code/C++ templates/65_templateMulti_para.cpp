#include<iostream>
using namespace std;
/*
CLASS TEMPLATE WITH MULTIPLE PARAMETERES
template <class T1, class T2,.,.,.,....>
class NameOfClass{
    //body
}
*/
template <class T1, class T2>
class mhariClass{
    T1 data1;
    T2 data2;
    public :
    mhariClass(T1 i, T2 j){
        data1 = i;
        data2 = j;
    }
    void display(){
        cout<<this->data1<<endl<<this->data2;
    }
};
int main(){
    mhariClass <int, double> obj(12, 1.223);
    obj.display();
    
return 0;
}