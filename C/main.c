#include <stdio.h>
#pragma warning(disable : 4996)

int main() {

    int seconds, minutes, hours, seconds2, minutes2;

    printf("Enter your seconds: ");
    scanf("%d", &seconds);
    seconds2 = seconds % 60;
    minutes = seconds / 60;
    minutes2 = minutes % 60;
    hours = minutes / 60;
    printf("\n%d hour(s), %d minute(s), %d second(s).", hours, minutes2, seconds2);

    return 0;
}
