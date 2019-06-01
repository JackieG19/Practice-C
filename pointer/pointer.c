#include <cs50.h>
#include <stdio.h>

int add(int *x, int y)
{
    *x += 3;
    return *x + y;
}

int main(void)
{
    printf("hello\n");
    int a = 5;
    int b = 10;

    printf("the total is: %i\n", add(&a, b));
    printf("the total is: %i\n", add(&a, b));


    // int* intPointer;
    // intPointer = &b;
    // printf("b is: %i\n", b);
    // *intPointer = 47;
    // printf("b is: %i\n", b);

}