#include<cs50.h>
#include<stdio.h>

// int main() is used as the entry point of the program.
// main() is the function from where the program will start to execute.

// int denotes that the main() function will return an integer value to the system which is executing the main().
// So at the end of program (before}) we have to write return(0)

int main(void)
{
    printf("hello, world!\n");
}

// \n is an escape charater

/*
printf("hello, world!");
~/workspace/week1/ $ clang hello.c
~/workspace/week1/ $ ls
a.out*  hello.c
~/workspace/week1/ $ ./a.out
hello, world!~/workspace/week1/ $

printf("hello, world!\n");
hello, world!~/workspace/week1/ $ clang hello.c
~/workspace/week1/ $ ./a.out
hello, world!

~/workspace/week1/ $ clang hello.c -o hello
~/workspace/week1/ $ ls
a.out*  hello*  hello.c
~/workspace/week1/ $ ./hello
hello, world!

~/workspace/week1/ $ rm -f a.out
~/workspace/week1/ $ ls
hello*  hello.c
~/workspace/week1/ $ rm -f hello
~/workspace/week1/ $ ls
hello.c
*/

