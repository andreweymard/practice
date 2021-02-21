#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//my take on a dynamic array

int main()
{
    char *arr, ans[2], yes[] = "Y";
    int num, avg = 0, element = 1, yn = 0;

    arr = (char *) malloc(element);
    arr[0] = NULL;

    while (yn == 0) {

        printf("Enter a number: ");
        scanf("%d", &num);

        if (arr[0] == NULL) {
            arr[0] = num;
        }
        else {
            element++;
            arr = (char *) realloc(arr, element);
            arr[element - 1] = num;
        }

        printf("Do you want to enter another number? (Y/N) : ");
        scanf("%s", &ans);
        yn = strcmp(&ans, &yes);
    }

    for (int i = 0; i < element; i++) {
        avg += arr[i];
    }

    printf("The average is: %d", avg / element);

    free(arr);
    return(0);
}
