#include <iostream>
using namespace std;
class stack
{
    int size;
    int top;
    int *arr;

public:
    stack()
    {
        size = 10;
        top = -1;
        arr = new int[size];
    }
    int IsFull(stack *);
    int IsEmpty(stack *);
    void push(stack *, int);
    int pop(stack *);
    int peek(int);
    void display();
};
int stack ::IsFull(stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int stack ::IsEmpty(stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void stack ::push(stack *ptr, int val)
{
    if (IsFull(ptr))
    {
        cout << "Stack Overflow !!! at " << val << endl;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
        cout << "Element " << val << " is Pushed At " << ptr->top << endl;
    }
}
int stack ::pop(stack *ptr)
{
    if (IsEmpty(ptr))
    {
        cout << "Stack is Underflow !!!" << endl;
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
        cout << val;
    }
}
int stack ::peek(int i)
{
    int peek = top - i + 1;
    if (peek < 0)
    {
        cout << "Not Valid Operation!!" << endl;
        return -1;
    }
    else
    {
        return arr[top - i + 1];
    }
}
void stack ::display()
{
    for (int j = 1; j <= top + 1; j++)
    {
        cout << "The Value At Position " << j << " is " << peek(j) << endl;
    }
}
int main()
{
    stack *s = new stack[1];
    s->push(s, 11);
    s->push(s, 12);
    s->push(s, 13);
    s->push(s, 14);
    s->push(s, 15);
    s->push(s, 16);
    s->push(s, 17);
    s->push(s, 18);
    s->push(s, 19);
    s->push(s, 20);
    cout << "Element poped is :" << s->pop(s) << endl;
    cout << "Element poped is :" << s->pop(s) << endl;
    cout << "Element poped is :" << s->pop(s) << endl;
    cout << "Element poped is :" << s->pop(s) << endl;
    cout << "Element poped is :" << s->pop(s) << endl;
    s->display();

    return 0;
}