#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
class circularQueue{
    public :
        int size;
        int front;
        int Rare;
        int *arr = new int();
};
int isFull(circularQueue* ptr){
    int f = (ptr->Rare+1)%(ptr->size);
    if(f == ptr->front){
        return 1;
    }
    return 0;
}
int isEmpty(circularQueue* ptr){
    if(ptr->front == ptr->Rare){
        return 1;
    }
    return 0;
}
void enqueueR(circularQueue *&ptr, int data){
    if (!isFull(ptr))
    {
        cout<<"Enqueuing Element to Back  : "<<data<<endl;
        ptr->Rare = (ptr->Rare+1)%(ptr->size);
        ptr->arr[ptr->Rare] = data;
    }
    else{
        cout<<"Queue OverFlow!"<<endl;
    }
}
void enqueueF(circularQueue *&ptr, int data){
    if (!isFull(ptr))
    {
        cout<<"Enqueuing Element to Front  : "<<data<<endl;
        ptr->arr[ptr->front] = data;
        if(ptr->front == 0){
            cout<<"Unable To Insert From Front!"<<endl;
            return;
        }else{
            ptr->front = (ptr->front-1)%(ptr->size);
        }
    }
    else{
        cout<<"Queue OverFlow!"<<endl;
    }
}
int dequeueF(circularQueue *&ptr){
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
int dequeueR(circularQueue *&ptr){
    int a = -1;
    if (isEmpty(ptr))
    {
        cout<<"Queue UnderFlow!";
    }
    else{
        a = ptr->arr[ptr->Rare];
        ptr->Rare = (ptr->Rare-1)%(ptr->size);
    }
    return a;
}
int main(){
    circularQueue* q = new circularQueue[sizeof(circularQueue)];
    q->size = 5;
    q->front = 0;
    q->Rare = 0; 
    enqueueR(q,11);
    enqueueR(q,12);
    enqueueR(q,13);
    cout<<"Dequeued Element from Front is : "<<dequeueF(q)<<endl;
    cout<<"Dequeued Element From back is : "<<dequeueR(q)<<endl;
    cout<<"Dequeued Element From back is : "<<dequeueR(q)<<endl;
    cout<<"Dequeued Element From back is : "<<dequeueR(q)<<endl;
    enqueueF(q,14);
    for (int i = q->front+1; i <= q->Rare; i++)
    {
        cout<<q->arr[i]<<" ";
    } 
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