#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)

int main() {

    int a, b, c;
    float root, plus, minus;

    printf("Enter your quadratic equation in the format ax^2 + by + c. \n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);

    root = sqrt((b * b) - (4 * (a * c)));
    plus = ((0 - b) + root) / (2 * a);
    minus = ((0 - b) - root) / (2 * a);

    printf("%f %f", plus, minus);

    return 0;
}
