#include<iostream>
using namespace std;
class Node{
    public :
        int data;
        Node* next;
        Node* end();
};
void Traversal(Node* ptr){
    while (ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;    
}
void deletion(Node* &head){
    Node* newl = head;
    head = head->next;
    free(newl);
}
void deletion(Node* &head,int index){
    Node* ptr1 = head;
    Node* ptr2 = head->next;
    int i = 0;
    while(i != index-1){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
        i++;
    }
    ptr1->next = ptr2->next;
    free(ptr2);
    
}
void deletionAtEnd(Node* &head){
    Node* p = head;
    Node* q = head->next;
    while(q->next != NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
}
void deletionAtGivenValue(Node* &head, int key){
     Node* ptr1 = head;
     Node* ptr2 = head->next;
     if(key == ptr1->data){
        head = head->next;
        free(ptr1);
        return;
     }
     while(ptr2->data != key && ptr2->next == NULL){
         ptr1 = ptr1->next;
         ptr2 = ptr2->next;
     }
       if(key != ptr2->data){
            cout<<"Out Of Range!"<<endl;
            return;
        }else{
            ptr1->next = ptr2->next;
            free(ptr2);
        }
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
    // deletion(head);     //--->At the Beginning
    // deletion(head,2);   //--->At The index
    // deletionAtEnd(head);//--->At In end
    // deletionAtGivenValue(head,0);//--->After A Node
    Traversal(head);
    
return 0;
}