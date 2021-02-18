#include <stdio.h>
#pragma warning(disable : 4996)

int main() {

    int deno, nume;

    printf("Enter your numerator: ");
    scanf("%d", &nume);
    printf("Enter your denominator: ");
    scanf("%d", &deno);

    if (nume % deno != 0) {
        printf("There is a remainder.");
    } 
    else {
        printf("There is no remainder.");
    }

    return 0;
}
