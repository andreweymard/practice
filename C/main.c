#include <stdio.h>

int main() {
    int num = 55;
    int* poi = NULL;

    poi = &num;

    printf("%d\n", *poi);

    return(0);
}
