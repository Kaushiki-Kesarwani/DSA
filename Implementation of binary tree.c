#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create()
{
    struct node *newnode;
    int x;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data(-1 for no node):");
    scanf("%d", &x);

    if (x == -1)
    {
        return 0;
    }
    newnode->data = x;

    printf("Enter left child of %d\n", x);
    newnode->left = create();

    printf("Enter right child of %d\n", x);
    newnode->right = create();

    return newnode;
}
void preorder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    printf("%d\t", root->data);
    preorder(root->left);
    preorder(root->right);
}

void Inorder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    Inorder(root->left);
    printf(" %d\t", root->data);
    Inorder(root->left);
}

void postorder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf(" %d\t", root->data);
}

int main()
{
    struct node *root;
    root = 0;
    root = create();
    preorder(root);
    printf("\n");
    // Inorder(root);
    // printf("\n");
    // postorder(root);
    // printf("\n");
    return 0;
}