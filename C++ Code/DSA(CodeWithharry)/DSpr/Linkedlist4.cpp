#include<iostream>
using namespace std;
class Node{
    public :
        int data;
        Node* next;
        Node* end();
};
void Traversal(Node* ptr){
    Node* p = ptr;
    do{
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }while (p != ptr);
    cout<<endl;    
}
void insertion(Node* &head,int x){
    Node* newl = new Node();
    newl->data = x;
    Node* p = head;
     while (p->next != head){
        p = p->next;
    }
    newl->next = head;
    p->next = newl;
    head = newl;
}
Node* insertion(Node* head, int x, int ind){
    Node* ptr = new Node();
    ptr->data = x;
    Node* p = head;
    int i = 0;
    while(i != ind-1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;   
}
Node* insertion(Node* head, Node* node, int x){
    Node* ptr = new Node();
    ptr->data = x;
    ptr->next = node->next;
    node->next = ptr;
    return head;   
}
Node* insertionAtEnd(Node* head, int x){
    Node* ptr = new Node();
    ptr->data = x;
    Node* p = head;
    while(p->next != head){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    return head;
}
int main(){
    Node* head,*second,*third;
    head = new Node();
    second = new Node();
    third = new Node();
    head->data = 9;
    head->next = second;
    second->data = 10;
    second->next = third;
    third->data = 19;
    third->next = head;
    Traversal(head);

    // insertion(head,12);       //---> At The beginning
    // insertion(head,111,1);    //---> At the index
    // insertionAtEnd(head,113); //---> At the End
    // insertion(head,second,1); //---> After The Given Address
    Traversal(head);
    
return 0;
}