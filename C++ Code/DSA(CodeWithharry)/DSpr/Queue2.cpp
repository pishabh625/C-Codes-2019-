#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
class circularQueue{
    public :
        int size;
        int front;
        int back;
        int *arr = new int();
};
int isFull(circularQueue* ptr){
    int f = (ptr->back+1)%(ptr->size);
    if(f == ptr->front){
        return 1;
    }
    return 0;
}
int isEmpty(circularQueue* ptr){
    if(ptr->front == ptr->back){
        return 1;
    }
    return 0;
}
void enqueue(circularQueue *&ptr, int data){
    if (!isFull(ptr))
    {
        cout<<"Enqueuing Element : "<<data<<endl;
        ptr->back = (ptr->back+1)%(ptr->size);
        ptr->arr[ptr->back] = data;
    }
    else{
        cout<<"Queue OverFlow!"<<endl;
    }
}
int dequeue(circularQueue *&ptr){
    int a = -1;
    if (isEmpty(ptr))
    {
        cout<<"Queue UnderFlow!";
    }
    else{
        ptr->front = (ptr->front+1)%(ptr->size);
        a = ptr->arr[ptr->front];
    }
    return a;
}
int main(){
    circularQueue* q = new circularQueue[sizeof(circularQueue)];
    q->size = 5;
    q->front = 0;
    q->back = 0; 
    enqueue(q,11);
    enqueue(q,12);
    enqueue(q,13);
    enqueue(q,14);
    cout<<"Dequeued Element is : "<<dequeue(q)<<endl;
    cout<<"Dequeued Element is : "<<dequeue(q)<<endl;
    cout<<"Dequeued Element is : "<<dequeue(q)<<endl;
    cout<<"Dequeued Element is : "<<dequeue(q)<<endl;
    if (isFull(q))
    {
        cout<<"Queue Is Full "<<endl;
    }
    if (isEmpty(q))
    {
        cout<<"Queue Is Empty "<<endl;
    }
    
return 0;
}