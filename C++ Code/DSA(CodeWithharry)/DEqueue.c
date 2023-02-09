#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int* arr;
};


int isEmpty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}

int isFull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}
int isFullF(struct queue *q){
    if(q->f==-1){
        return 1;
    }
    return 0;
}

void enqueueR(struct queue *q, int val){
    if(isFull(q)){
        printf("This Queue is full\n");
    }
    else{
        q->r++;
        q->arr[q->r] = val;
        printf("Enqued element At Rear: %d\n", val);
    }
}
void enqueueF(struct queue *q, int val){
    if(isFullF(q)){
        printf("This Queue is full\n");
    }
    else{
        q->arr[q->f] = val;
        q->f--;
        printf("Enqued element At front: %d\n", val);
    }
}

int dequeueF(struct queue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("This Queue is empty\n");
    }
    else{
        q->f++;
        a = q->arr[q->f]; 
    }
    return a;
}
int dequeueR(struct queue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("This Queue is empty\n");
    }
    else{
        a = q->arr[q->r]; 
        q->r--;
    }
    return a;
}
void display(int arr[], int n, struct queue* q){
    // Code for Traversal
    if(q->f==q->r){
        printf("This Queue Has NO Elements !!!");
    }else
    for (int i = 0; i <= n; i++)
    {
        printf("Element Left Is : %d \n", arr[i]);
    }
    printf("\n");   
}
int main(){
    struct queue q;
    q.size = 6;
    q.f = q.r = -1;
    q.arr = (int*) malloc(q.size*sizeof(int));
    
    // Enqueue few elements
    enqueueR(&q,45);
    enqueueR(&q,4);
    enqueueR(&q,5);

    printf("Dequed Element From Front is : %d\n",dequeueF(&q));
    printf("Dequed Element From Front is : %d\n",dequeueF(&q));
    printf("Dequed Element From Front is : %d\n",dequeueF(&q));
   
    
    enqueueF(&q,47);
    enqueueF(&q, 6);
    enqueueF(&q, 6);
      
    printf("Dequed Element From Rear is : %d\n",dequeueR(&q));    
    printf("Dequed Element From Rear is : %d\n",dequeueR(&q)); 
   

    display(q.arr,q.r,&q);
   
   

    // printf("Dequed Element From Front %d is : %d\n",q.f,dequeueF(&q));
    // printf("Dequed Element From Front %d is : %d\n",q.f,dequeueF(&q));    
    // printf("Dequed Element From Front %d is : %d\n",q.f,dequeueF(&q));    
  
    
       

  


    if(isEmpty(&q)){
        printf("Queue is empty\n");
    }
    if(isFull(&q)){
        printf("Queue is full\n");
    }

    return 0;
}