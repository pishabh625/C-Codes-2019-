#include<iostream>
using namespace std;

class stack{
    public :
        int size = 10;
        int top = -1;
        int* arr = (int*)malloc(size*sizeof(int));
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
void push(stack *sp, int value){
    if(isFull(sp))
    {
        cout<<"Stack OverFlow!"<<endl;
    }else{
        sp->top++;
        sp->arr[sp->top] = value;
        cout<<"Pushed Element At "<<sp->top<<" Is : "<<value<<endl;    
    }  
}
int pop(stack *sp){
    if(isEmpty(sp)){
        cout<<"Stack Is Empty ! ";
        return -1;
    }else{
        int p = sp->arr[sp->top];
        sp->top = sp->top - 1;
        cout<<"Poped Element Is : ";
        return p;
    }
}
int main(){
    stack *s = new stack[sizeof(stack)];
    push(s,1);
    push(s,2);
    push(s,3);
    push(s,4);
    push(s,5);
    push(s,6);
    push(s,7);
    push(s,8);
    cout<<pop(s)<<endl;
    cout<<pop(s)<<endl;
    cout<<pop(s)<<endl;
    cout<<pop(s)<<endl;
    print(s);

return 0;
}
    // int value;
    // int t; 
    // cout<<"How Many Times You Want To Push : ";
    // cin>>t;
    // for (int i = 0; i < t; i++)
    // {
    //     cout<<"Enter A value You want to Push :";
    //     cin>>value;
    //     cout<<"Pushed Element At "<<i<<" Is : "<<push(s,value)<<endl;
    // }