#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
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

int isFull(struct stack *ptr)
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


int main()
{
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *) malloc(s.size * sizeof(int));

    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 5;
    s->top = -1;
    s->arr = (int *) malloc(s->size * sizeof(int));
 
    // Pushing an element manually
    s->arr[0] = 77;
    s->top++;
   
  if(isFull(s)){
       
        printf("Empty\n");
   }else
   {
       printf("Not Empty\n");
   }
   
   if(isFull(s)){
       
        printf("Full\n");
   }else
   {
       printf("Not Full\n");
   }
   

    // Pushing an element manually
    // s->arr[0] = 7;
    // s->top++;

    // Check if stack is empty
    // if(isEmpty(s)==0){
    //     printf("The stack is empty");
    // }
    // else{
    //     printf("The stack is not empty");
    // }
    return 0;
}