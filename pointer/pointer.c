#include <cs50.h>
#include <stdio.h>

// int add is a function with 2 arguments()
// (integer *x is a pointer *, integer of y)
// x = a , y = b

int add(int *x, int y)
{
    *x += 3; // what x is address to + 3
    return *x + y;
}

int main(void)
{
    // printf("hello\n");
    int a = 5;
    int b = 10;

    // this print triggers the int add function
    printf("the total is: %i\n", add(&a, b));

    // once the int add function is done, it removes itself...

    printf("the total is: %i\n", add(&a, b));
    // and recreates again triggered by the second print);

}

/*
in the terminal

the total is: 18
the total is: 21

*/
