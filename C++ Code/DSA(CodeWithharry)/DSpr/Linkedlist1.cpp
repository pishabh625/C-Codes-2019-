#include<iostream>
using namespace std;
class Node{
    public :
        int data;
        Node* next;
};
void Traversal(Node* ptr){
    while (ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;    
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
    third->next = NULL;
    Traversal(head);
return 0;
}