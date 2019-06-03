#include <stdio.h>
#include <stdlib.h>

// to use true and false
// define true 1
// define false 0

// struct called node containing on int identified as "value",
// a reference to another node identified as "next"

// typedef - create the name  of the struct and be reused
typedef struct NODE
{
    int value; // the identifier
    struct NODE *next; // defining pointing from the identifier
} // attribute packed is optional
NODE;

// iterate the linked list until you get to the end
// once at the end print out last value
// once at the end add the new node

void addNode(int value, NODE *homeNode)
{
    NODE *trav = homeNode;

    while(trav->next != NULL)
    {
        trav = trav->next;
    }

    NODE *newNode = malloc(sizeof(NODE)); // send new address to a new node
    newNode->value = value;
    newNode->next = NULL;
    // homeNode->next = newNode;
    trav->next = newNode;

    // while(1)
    // {
    //     //if(homeNode->next == NULL)
    //     if(trav->next == NULL)
    //     {
    //         NODE *newNode = malloc(sizeof(NODE)); // send new address to a new node
    //         newNode->value = value;
    //         newNode->next = NULL;
    //         homeNode->next = newNode;
    //         trav->next = newNode;
    //         break;
    //     }

    //     else
    //     {
    //         trav = trav->next;
    //         printf("moved deeper\n");
    //         //printf("ERROR: next node not null\n");
    //     }
    // }
}

void displaylist(NODE* trav)
{
    // should display 5, 10, 8, 17
    printf("%i", trav->value);
    while(trav->next != NULL)
    {
        trav = trav->next;
        printf(", %i", trav->value);
    }
    printf("\n");

}

int main(void)
{
   NODE rootNode;
   rootNode.value = 5;
   rootNode.next = NULL;

   addNode(10, &rootNode);

   NODE secondNode;
   secondNode.value = 10;
   rootNode.next = &secondNode;

   //printf("%i\n", rootNode.value); // 5
   //printf("%i\n", rootNode.next->value); // 10
   //printf("%i\n", secondNode.value); // 10

   addNode(8, &rootNode);
   //printf("added 8\n");
   addNode(17, &rootNode);
  // printf("%i\n%i\n", rootNode.next->next->value, rootNode.next->next->next->value);

  displaylist(&rootNode);
}


// struct // example
// {
//     int age;
//     int birthYear;
// }
// me;
// me.age = 15;
// me.birthYear = 1999
