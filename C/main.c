#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)

int main() {

    int c;
    
    printf("Enter a number between 1 and 500: ");
    scanf("%d", &c);

    if (c > 0 && c < 101) {
        printf("a");
    }
    else if (c > 100 && c < 201) {
        printf("b");
    }
    else if (c > 200 && c < 301) {
        printf("c");
    }
    else if (c > 300 && c < 401) {
        printf("d");
    }
    else if (c > 400 && c < 501) {
        printf("e");
    }
    else {
        printf("f");
    }

    return 0;
}
