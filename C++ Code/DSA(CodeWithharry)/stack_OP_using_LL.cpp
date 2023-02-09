#include<iostream>
using namespace std;
class Node{
    int data;
    class Node* next;
    public :
        int IsFull();
        int IsEmpty(Node*);
        Node *push(Node*,int);
        int pop(Node*);
};
int IsFull(){
    Node * p = new Node;
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
int IsEmpty(Node * TP){
   
    if(TP==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

Node* Node :: push(Node * tp, int x){
   
    // if(IsFull()){
    //     cout<<"Stack Overflow !!";
    //     return 0;
    // }
    // else{
        Node *n = new Node;
        n->data = x;
        n->next = tp;
        tp = n;
        return tp;

    // }
}
int Node :: pop(Node * tp){
   
    // if(IsEmpty(tp)){
    //     cout<<"Stack Underflow !!";
    //     return -1;
    // }
    // else{
       Node * n = tp;
       tp = tp->next;
       int x = n->data;
       free(n);
       return x;

    // }
}

int main(){
    Node * TP=NULL;
    TP->push(TP,12);
    TP->push(TP,13);
    TP->push(TP,14);
    TP->push(TP,15);




    
    
return 0;
}