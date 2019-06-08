#include <cs50.h>
#include <stdio.h>

void printSum(void);
void printSums(int x, int y);

int main(void)
{
    printf("hello\n");
    printSum();
}

void printSum(void)
{
    printf("1 + 2 = %i\n", 1 + 2);
}

void printSums(int x, int y)
{
    printf("%i + %i", x, y, x + y);
}



// void printSum(void);

// int main(void)
// {
//     printf("hello\n");
//     printSum();
// }

// void printSum(void)
// {
//     printf("1 + 2 = %i\n", 1 + 2);
// }


// void printSum(void)
// {
//     printf("1 + 2 = %i\n", 1 + 2);
// }

// int main(void)
