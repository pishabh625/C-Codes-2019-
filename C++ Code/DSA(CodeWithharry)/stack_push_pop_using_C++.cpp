#include<iostream>
using namespace std;
class stack{
    int size;
    int top;
    int* arr;
public :
    stack(){
        size=5;
        top=-1;
        arr = new int[size];
    }
    int IsFull(stack*);
    int IsEmpty(stack*);
    void push(stack* , int );
    int pop(stack *);
    void traversal(stack*);
};
int stack :: IsFull(stack* ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }else{
        return 0;
    }
}
int stack :: IsEmpty(stack* ptr){
    if(ptr->top == -1){
        return 1;
    }else{
        return 0;
    }
}
void stack :: push(stack* ptr, int val){
    if(IsFull(ptr)){
        cout<<"Stack Overflow !!! at "<<val<<endl;
    }else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
        cout<<"Element "<<val<<" is Pushed At "<<ptr->top<<endl;
    }
}
int stack :: pop(stack * ptr){
    if(IsEmpty(ptr)){
        cout<<"Stack is Underflow !!!";
        return -1;
    }else{
        int val= ptr->arr[ptr->top];
        ptr->top--;
        return val;
        cout<<val;
    }
}
void stack :: traversal(stack* ptr){
    for(int i=0;i<ptr->size;i++){
        cout<<"The Elemet at  ";
        static int jop =0;
        cout<<jop<<" is "<<arr[i]<<endl;
        jop++;
    }
}
int main(){
    stack* s = new stack[1];
    s->push(s,1);
    s->push(s,2);
    s->push(s,3);
    s->push(s,4);
    s->push(s,5);
    s->push(s,6);
    s->push(s,7);
    s->push(s,8);
    cout<<"Element poped is :"<<s->pop(s)<<endl;
    s->traversal(s);

    
    

    
return 0;
}