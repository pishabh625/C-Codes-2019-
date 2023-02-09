#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createNode(int data)
{
    struct node *n;
    // creating pointer
    printf("Creating Node :\n");

    n = (struct node *)malloc(sizeof(struct node)); // creating a node in heap memory
    n->data = data;                                 // setting up data of node
    n->left = NULL;                                 // setting up left pointer of node
    n->right = NULL;                                // setting up right pointer of node
    return n;                                       // Returning the created node
}
void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data, " ");
        preOrder(root->left);
        preOrder(root->right);
    }
}
void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data, " ");
    }
}
void InOrder(struct node *root)
{
    if (root != NULL)
    {
        InOrder(root->left);
        printf("%d ", root->data, " ");
        InOrder(root->right);
    }
}
int isBST(struct node *root)
{
    if (root != NULL)
    {
        //False if left is > than root
        if (root->left != NULL && root->left->data > root->data)
        {
            return 0;
        }
        //False if right is < than root
        if (root->right != NULL && root->right->data < root->data)
        {
            return 0;
        }
        // False if, recorsively, The left or right is not a BST
        if (!isBST(root->left) || !isBST(root->right))
        {
            return 0;
        }
        //Passing all that, it's BST
        else
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
}
int main()
{
    // creating a nodes using function
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);
    // conneting root node with two children nodes
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    // preOrder(p);
    // printf("\n");
    // postOrder(p);
    InOrder(p);
    printf("\n");
    printf("%d", isBST(p));

    return 0;
}