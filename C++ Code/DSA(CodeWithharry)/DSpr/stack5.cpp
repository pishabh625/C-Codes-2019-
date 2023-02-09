#include <iostream>
using namespace std;
class stack
{
public:
    int data;
    stack *next;
};
int isEmpty(stack *top)
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}
int isFull()
{
    stack *temp = new stack();
    if (temp == NULL)
    {
        return 1;
    }
    return 0;
}
void Traversal(stack *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}
stack *push(stack *&top, int x)
{
    if (isFull())
    {
        cout << "stack OverFlow!";
        return NULL;
    }
    else
    {
        stack *n = new stack[sizeof(stack)];
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}
int pop(stack*&top){    
    if (isEmpty(top))
    {
        cout<<"Stack UnderFlow!";
        return 0;
    }else{
        stack *n = top;
        top = top->next;
        int x = n->data;
        free(n);
        return x;
    }
}
int peek(stack*&top,int pos){
    stack* ptr = top;
    for (int i = 1; i < pos && ptr != NULL; i++)
    {
        ptr  = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }else{
        cout<<"Invalid Position!";
        return -1;
    }
    
}
int main()
{
    stack *top = NULL;
    push(top, 12);
    push(top, 14);
    push(top, 15);
    push(top, 16);
    push(top, 17);
    Traversal(top);
    cout<<peek(top,6);
    return 0;
}  