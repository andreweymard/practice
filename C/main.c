#include <stdio.h>
#include <stdlib.h>

int main(){
    int age;
    char *first, *last;

    printf("Hello, World!#");
    printf("What is your first name? ");
    scanf("%ms", &first);
    printf("What is your last name? ");
    scanf("%ms", &last);
    printf("What is your age? ");
    scanf("%d", &age);
    printf("Hi, %s %s,", first, last);
    printf("You are %d years old.", age);

    free(first);
    free(last);

    return 0;
}
