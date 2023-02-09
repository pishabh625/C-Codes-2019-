#include<iostream>
using namespace std;
class Node{
    public :
        int data;
        Node* prev;
        Node* next;
};
void Traversal(Node* head){
    Node*ptr = head;
    while (ptr->next != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<ptr->data<<" ";
    cout<<endl;
    do{
        cout<<ptr->data<<" ";
        ptr = ptr->prev;
    }while(ptr != NULL);
    cout<<endl;    
}
int main(){
    Node* head,*second,*third;
    head = new Node();
    second = new Node();
    third = new Node();

    head->prev = NULL;
    head->next = second;
    head->data = 9;

    second->prev = head;
    second->next = third;
    second->data = 10;

    third->prev = second;
    third->next = NULL;
    third->data = 19;

    Traversal(head);
return 0;
}