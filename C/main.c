#include <stdio.h>

int main(){
    int age;

    printf("Hello, World!#\n");
    printf("What is your age?  ");
    age = getchar();
    printf("\nYou are ");
    putchar(age);
    printf(" years old.\n");

    return 0;
}
