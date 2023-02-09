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
    // printf("Creating Node :\n");\n

    n = (struct node *)malloc(sizeof(struct node)); // creating a node in heap memory
    n->data = data;                                 // setting up data of node
    n->left = NULL;                                 // setting up left pointer of node
    n->right = NULL;                                // setting up right pointer of node
    return n;                                       // Returning the created node
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
struct node *SearchingIterBST(struct node *root, int key)
{
    while (root != NULL)
    {
        if (key == root->data)
        {
            return root;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }

    return NULL;
}
void insert(struct node *root, int key)
{
    struct node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (key == root->data)
        {
            printf("Cannot Insert %d , already in BST!\n",key);
            return;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    struct node *new = createNode(key);
    if (key < prev->data)
    {
        prev->left = new;
    }
    else
    {
        prev->right = new;
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
    int c = 5;
    insert(p, c);
    insert(p, 3);
    insert(p, 9);
    insert(p, 8);
    insert(p, 7);
    printf("%d",p->right->right->left->left->data);
    return 0;
}