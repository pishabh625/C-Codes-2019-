#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
// Creating A function For Creating A Node........
struct node *createNode(int data)
{
    static int c = 0; 
    struct node *n;
                       // creating pointer
    printf("Creating Node : %d\n",c);

    n = (struct node *)malloc(sizeof(struct node)); // creating a node in heap memory
    n->data = data;                                 // setting up data of node
    n->left = NULL;                                 // setting up left pointer of node
    n->right = NULL;                                // setting up right pointer of node
    return n;                                       // Returning the created node
}

int main()
{
    // creating a nodes using function
    struct node *p = createNode(2);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(4);
    // conneting root node with two children nodes
    p->left = p1;
    p->right = p2;
    // printing data of this three nodes
    printf("data is: %d\n", p->data);
    printf("data is: %d\n", p1->data);
    printf("data is: %d\n", p2->data);
    return 0;
}