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
char pop(stack *sp){
    char p = sp->arr[sp->top];
    sp->top = sp->top - 1;
    return p;
}
char stacktop(stack* st){
    return st->arr[st->top];
}
int isOperator(char ch){
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/'){
        return 1;
    }
    return 0;
}
int prec(char ch){
    if(ch == '*' || ch == '/'){
        return 2;
    }else if(ch == '+' || ch == '-'){
        return 1;
    }
    return 0;
}
string inToPo(string infix){
    stack* st = new stack();
    string postfix = "";
    int i = 0;
    while(infix[i] != '\0')
    {
        if (!isOperator(infix[i])){
            postfix += infix[i];
            i++;
        }else if(prec(infix[i]) > prec(stacktop(st))){
            push(st,infix[i]);
            i++;
        }
        else{
            postfix += pop(st);
        }
    }
    while(!isEmpty(st)){
        postfix += pop(st);
    }
    return postfix;
}
int main(){
    string s = "x-y/z-k*d";
    s = inToPo(s);
    for (int i = 0; i < s.size(); i++)
    {
        cout<<s[i];
    }
return 0;
}