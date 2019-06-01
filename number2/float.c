#include<cs50.h>
#include <math.h>
#include<stdio.h>

int main(void)
{
//   int number = 1337;
//   printf("hello, %i!\n", number);

   float money1 = 1.52;
   int cents1 = round(money1 * 100); // 152

   float money2 = 3.87;
   int cents2 = round(money2 * 100); // 378

   int change = cents1 + cents2; // 539

   int cents = change % 100;

   int dollars = change / 100;

   float total = (float)change / 100.0;

   printf("money addtion: $%.8f\n", dollars, cents);

   // float division = 78.0/(float)16;
   // printf("money addtion: %.8f\n", money1 + money2);
   // printf("division result: %.3f\n", division);
}

/*
~/workspace/week1/number2/ $ clang float.c
~/workspace/week1/number2/ $ ./a.out
hello, 1337!
money addtion: 5.300000
division result: 4.875000
*/

/*
~/workspace/week1/number2/ $ ./float
hello, 1337!
money addtion: 5.30000019
division result: 4.875
*/