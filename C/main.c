#include <stdio.h>
#define pi 3.14

int main() {

    float radius, area;

    printf("Enter your radius: ");
    scanf("%f", &radius);
    area = pi * (radius * radius);
    printf("\nThe area of your circle is: %f\n", area);

    return 0;
}
