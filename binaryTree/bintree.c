#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

// first challenge create a binary tree you can still call it it a node
typedef struct NODE
{
    int value;
    struct NODE *low; // low numbers go to the left
    struct NODE *high; // high numbers go to the right
} NODE;

NODE *rootNode;

void addNode(int value)
{
    NODE *newNode = malloc(sizeof(NODE));
    newNode->value = value;
    newNode->high = NULL;
    newNode->low = NULL;

    if (rootNode == NULL)
    {
        rootNode = newNode;
        return;
    }

    /* create the logic to add one node to either high or low branch
        10, 8, 15, 17, 9, 20, 18, 16, 13, 5, 7

     if the value of the new node is less than the current node go low
     else if the new node is greater than the current node go right */
     NODE *trav = rootNode;
    while(1)
    {
        if(newNode->value < trav->value)
        {
            if(trav->low == NULL)
            {
                trav->low = newNode;
                return;
            }
            trav = trav->low;
            continue;
        }

        else
        {
            if(trav->high ==NULL)
            {
                trav->high = newNode;
                return;
            }
            trav = trav->high;
            continue;
        }
    }

}

// displaying the tree node on entering
void displayTree(NODE *curNode)
{
    printf("%i\n", curNode->value);
    if(curNode->low)
    {
        displayTree(curNode->low);
    }

    if(curNode->high)
    {
        displayTree(curNode->high);
    }
}

void displayDeparture(NODE *curNode)
{
    //
}

int doesContain(int value)
{
    // search the tree
    // return 0 if value is not in the tree
    // return 1 if value does exist in the tree

    // if (rootNode->value == value)
    // {
    //     return 1;
    // }
    NODE *trav = rootNode;
    while(1)
    {
        if (trav->value == value)
        {
            return 1;
        }
        if (value < trav->value)
        {
            if (trav->low == NULL)
            {
                return 0;
            }
            trav = trav->low;
            continue;
        }
        if (!trav->high)
        {
            return 0;
        }
        trav = trav->high;
        continue;
    }
}

void tests()
{
    assert(doesContain(10) && "tree does contain 10");
    assert(doesContain(8) && "tree does contain 8");
    assert(doesContain(4) && "tree does contain 4");
    assert(!doesContain(1) && "tree does not contain 1");
    assert(doesContain(15) && "tree does contain 15");
    assert(!doesContain(100) && "Tree does not contain 100");
    assert(doesContain(13) && "tree does contain 13");
    assert(doesContain(7) && "tree does contain 7");
    assert(!doesContain(16) && "tree does not contain 16");
}


int main(void)
{
    //printf("hello\n");
    addNode(10);
    addNode(8);
    addNode(15);
    addNode(17);
    addNode(9);
    addNode(20);
    addNode(18);
    addNode(16);
    addNode(13);
    addNode(5);
    addNode(7);

    displayTree(rootNode);
    tests();
    printf("\n");

    // printf("%i\t%i\n", rootNode->low->value, rootNode->high->value);
}
