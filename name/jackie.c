#include<cs50.h>
#include<stdio.h>

int main(void)
{
    //string name = "Jackie";
    string name = get_string("What is your name: ");
    printf("hello, %s\n", name);
}

/*
string name = "Jackie";

~/workspace/week1/ $ make hello
clang -fsanitize=signed-integer-overflow -fsanitize=undefined -ggdb3 -O0 -std=c11 -Wall-Werror -Wextra
-Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadowhello.c  -lcrypt -lcs50 -lm -o hello
~/workspace/week1/ $ ./hello
hello, Jackie/
*/

/*
get_string();

~/workspace/week1/Hello2/ $ clang jackie.c
~/workspace/week1/Hello2/ $ clang jackie.c -o jackie
~/workspace/week1/Hello2/ $ make jackie
clang -fsanitize=signed-integer-overflow -fsanitize=undefined -ggdb3 -O0 -std=c11
-Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable
-Wshadow    jackie.c  -lcrypt -lcs50 -lm -o jackie
~/workspace/week1/Hello2/ $ ./jackie
What is your name: jackir
hello, jackir
*/