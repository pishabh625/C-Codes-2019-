#include<iostream>
#include<stdlib.h>
using namespace std;

class stack{
    public :
        int size;
        int top;
        int* arr;

};
int isEmpty(stack s){
    if (s.top == -1)
    {
        return 1;
    }
    return 0;
    
}
int isFull(stack s){
    if (s.top == s.size-1)
    {
        return 1;
    }
    return 0;
    
}
int main(){
    stack s;
    s.size = 80;
    s.top = -1;
    s.arr = (int*)malloc(s.size*sizeof(int));
    if (isEmpty(s))
    {
       cout<<"The Stack Is Empty !"<<endl;
    }else{
        cout<<"The Stack Is Not Empty !"<<endl;
    }
    if (isFull(s))
    {
        cout<<"The Stack Is FUll !"<<endl;
    }else{
        cout<<"The Stack Is Not FUll !"<<endl;
    }
    
    
return 0;
}