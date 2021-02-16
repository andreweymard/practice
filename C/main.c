#include <stdio.h>

int main(){
    int age;
    char first[20], last[20];

    printf("Hello, World!#");
    printf("What is your first name? ");
    scanf("%s", &first);
    printf("What is your last name? ");
    scanf("%s", &last);
    printf("What is your age? ");
    scanf("%d", &age);
    printf("Hi, %s %s,", first, last);
    printf("You are %d years old.", age);

    return 0;
}
