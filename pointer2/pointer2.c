#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("hello\n");
    int a = 5;
    int b = 10;

    // declaring a pointer
    int* intPointer;

    // intPointer = & means the address of b
    intPointer = &b;

    printf("b is: %i\n", b);

    // this pointer goes to line 14 and changes the value to 47
    *intPointer = 47;

    printf("b is: %i\n", b);

}


/*
in the terminal

hello
b is: 10
b is: 47

*/