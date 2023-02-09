#include<iostream>
using namespace std;
class node {
    public :
        int data;
        node* next;
};
void traverse(node *f, node *r){
    for(node* i = f; i != r; i = i->next)
    {
        cout<<i->data<<" ";
    }
    cout<<r->data<<endl;
}
int isFull(node* q){
    if(q == NULL){
        return 1;
    }
    return 0;
}
int isEmpty(node* f){
    if(f == NULL){
        return 1;
    }
    return 0;
}
node* enqueue(node*&f,node*&r, int val){
    node* n = new node();
    if (isFull(n))
    {
        cout<<"Queue OverFlow";
    }
    else{
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }else{
            r->next = n;
            r = n;
        }   
    }
    return n; 
}
int dequeue(node* &f){
    int val = -1;
    if (isEmpty(f))
    {
        cout<<"Queue Is Empty!"<<endl;
    }
    else{
        node* s = f;
        val = f->data;
        f = f->next;
        free(s);
    }
    return val;   
}
int main(){
    node *f = NULL,*r = NULL;
    enqueue(f,r,12);
    enqueue(f,r,13);
    enqueue(f,r,14);
    enqueue(f,r,15);
    traverse(f,r);
    dequeue(f);
    dequeue(f);
    dequeue(f);
    dequeue(f);
    enqueue(f,r,12);
    traverse(f,r);
return 0;
}