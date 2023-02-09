#include<iostream>
using namespace std;

class stack{
    public :
        int size = 10;
        int top = -1;
        int* arr = (int*)malloc(size*sizeof(int));
};
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
        // cout<<"Pushed Element At "<<sp->top<<" Is : "<<value<<endl;    
    }  
}
int peek(stack *sp, int i){
    if (sp->top-i+1 < 0)
    {
        cout<<"Invalid Position!"<<endl;
        return -1;
    }else{
        return sp->arr[sp->top-i+1];
    }
    
}
int main(){
    stack *s = new stack[sizeof(stack)];
    push(s,1);
    push(s,2);
    push(s,3);
    push(s,4);
    for (int i = 1; i <= s->top+1; i++)
    {
        cout<<"The Elemnt At "<<i<<" Position is : "<<peek(s,i)<<endl;
    }

return 0;
}
