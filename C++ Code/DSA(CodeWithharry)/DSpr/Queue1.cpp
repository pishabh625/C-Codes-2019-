#include<iostream>
using namespace std;
class Queue{
    public :
        int size;
        int front;
        int back;
        int *arr = new int();
};
void printQueue(Queue* ptr){
    for (int i = ptr->front+1; i <= ptr->back; i++)
    {
        cout<<ptr->arr[i]<<" ";
    }
    cout<<endl;
}
int isFull(Queue* ptr){
    if(ptr->back == ptr->size-1){
        return 1;
    }
    return 0;
}
int isEmpty(Queue* ptr){
    if(ptr->front == ptr->back){
        return 1;
    }
    return 0;
}

void enqueue(Queue *ptr, int data){
    if(ptr->front = ptr->size-1 && ptr->back == ptr->front){
        ptr->back = -1;
        ptr->front = -1;   
    }
    if (!isFull(ptr))
    {
        ptr->back++;
        ptr->arr[ptr->back] = data;
    }
    else{
        cout<<"Queue OverFlow!"<<endl;
    }
}
int dequeue(Queue *ptr){
    int a = -1;
    if (isEmpty(ptr))
    {
        cout<<"Queue UnderFlow!";
    }
    else{
        ptr->front++;
        a = ptr->arr[ptr->front];
    }
    return a;
}
int main(){
    Queue* q = new Queue[sizeof(Queue)];
    q->size = 10;
    q->front = -1;
    q->back = -1;
    enqueue(q,11);
    enqueue(q,12);
    enqueue(q,13);
    enqueue(q,14);
    cout<<"The Element dequeued is "<<dequeue(q)<<endl;
    enqueue(q,11);
    enqueue(q,11);
    printQueue(q);
return 0;
}