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
int match(char a, char b){
    if (a == '{' && b == '}'){
        return 1;
    }
    if (a == '[' && b == ']'){
        return 1;
    }
    if (a == '(' && b == ')'){
        return 1;
    }
    return 0;
}
int prachk(string s){
    stack *st = new stack[sizeof(stack)];
    char popped_ch;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
           push(st,s[i]);
        }else
        if (s[i] ==  ')'|| s[i] == '}' || s[i] == ']'){
            if(!isEmpty(st)){
                popped_ch = pop(st);
                if(match(!popped_ch, s[i])){
                    return 0;
                }
            }else{
                return 0;
            }
        } 
    }
    if(!isEmpty(st)){
        return 0;
    }else{
        return 1;
    }  
}
int main(){
    string s = "{}{}{}[][][({]})]";
    if (prachk(s))
    {
        cout<<"Paranthesis Matched :"<<endl;
    }else{
        cout<<"Not Matched :"<<endl;
    }
    
    ;
return 0;
}