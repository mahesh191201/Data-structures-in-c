#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *CreateNode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->right = NULL;
    n->left = NULL;
    return n;
}
void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

struct node *MinNode(struct node *root)
{
    struct node *ptr = root;
    while (ptr && ptr->left != NULL)
    {
        ptr = ptr->left;
        return ptr;
    }
}

/* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */

struct node *DeleteNode(struct node *root, int data)
{
    if (root == NULL)

        return root;

    if (data < root->data)

        root->left = DeleteNode(root->left, data);

    else if (data > root->data)

        root->right = DeleteNode(root->right, data);

    else
    {
        // case 1: no child
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return root;
        }
        // case 2: one child
        else if (root->left == NULL)
        {
            struct node *temp = root;
            root = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root;
            root = root->left;
            free(root);
            return temp;
        }
        // case 3: two child

        struct node *temp = MinNode(root->right);
        root->data = temp->data;
        root->right = DeleteNode(root->right, temp->data);
    }
    return root;
}

int main()
{
    /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */

    struct node *p = CreateNode(20);
    struct node *p1 = CreateNode(30);
    struct node *p2 = CreateNode(40);
    struct node *p3 = CreateNode(50);
    struct node *p4 = CreateNode(60);
    struct node *p5 = CreateNode(70);
    struct node *p6 = CreateNode(80);

    p3->right = p5;
    p3->left = p1;
    p1->right = p2;
    p1->left = p;
    p5->left = p4;
    p5->right = p6;

    printf("BST before deletion\n");
    inOrder(p3);
   // DeleteNode(p3, 80);
     DeleteNode(p3, 40);
    printf("\nBST after deletion\n");
    inOrder(p3);
    return 0;
}