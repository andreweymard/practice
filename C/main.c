#include <stdio.h>

int main() {
    char array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    for (int i = 0; i < 10; i++)
    {
        printf("%p %d\n", &array[i], array[i]);
    }

    return(0);
}
