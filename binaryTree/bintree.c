#include <stdio.h>
#include <stdlib.h>

// first challenge create a binary tree you can still call it it a node
typedef struct node
{
    int data;
    struct node *low;
    struct node *high;
}
node;

node* rootNode;

void addNode(int value)
{
    Node *newNode = malloc(sixeof(NODE));
    newNode->data = value;
    newNode->low = NULL;
    newNode->high = NULL;

    if()
    {
        rootNode = newNode;
        return;
    }
    NODE *trav = rootNode;

    // create the logic to add one node to either high or low branch
    // 10, 8, 15, 17, 9, 20, 18, 16, 13,5, 7
}

int main(void)
{
    printf("hello\n");
    addNode(10);
    addNode(15);
    addNode(8);
}
