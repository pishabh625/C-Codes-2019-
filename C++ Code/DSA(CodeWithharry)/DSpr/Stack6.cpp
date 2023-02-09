#include<iostream>
using namespace std;

class stack{
    public :
        int size = 100;
        int top = -1;
        char* arr = (char*)malloc(size*sizeof(char));
};
void print(stack *sp){
    for (int i = 0; i <= sp->top; i++)
    {
        cout<<"Element At "<<i<<" Is : "<<sp->arr[i]<<endl;
    }
}
int isEmpty(stack *sp){
    if (sp->top == -1)
    {
        return 1;
    }
    return 0;
    
}
int isFull(stack *sp){
    if (sp->top == sp->size-1)
    {
        return 1;
    }
    return 0;
    
}
void push(stack *sp, char value){
    if(isFull(sp))
    {
        cout<<"Stack OverFlow!"<<endl;
    }else{
        sp->top++;
        sp->arr[sp->top] = value;  
    }  
}
void pop(stack *sp){
    if(isEmpty(sp)){
        cout<<"Stack Is Empty ! ";
    }else{
        char p = sp->arr[sp->top];
        sp->top = sp->top - 1;
    }
}
void prachk(string s){
    stack *st = new stack[sizeof(stack)];
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
           push(st,'(');
           continue;
        }
        if (s[i] ==  ')'){
            if(!isEmpty(st)){
                pop(st);
            }else{
                cout<<"Paranthesis Not Matching !"<<endl;
                return;
            }
        } 
    }
    if(!isEmpty(st)){
        cout<<"Paranthesis Not Matching !"<<endl;
    }else{
        cout<<"Paranthesis Mached @"<<endl;
    }
    print(st);   
}
int main(){
    string s = "(+(+(+*)+)+)*(*+((+)+))()*+(+)(++)+*()";
    prachk(s);
return 0;
}