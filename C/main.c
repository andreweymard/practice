#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *arr;

    arr = (char *) malloc(1);
    arr[0] = 0;
    arr[1] = 1;

    for( int i = 0; i < 3; i++ ) {
        printf("%x ", arr[i]);
    }



    return(0);
}



//my take at a dynamic array

    int *arr;
    int num;
    char yes[] = "Y";
    char ans[2];
    int yn = 0;

    arr = (char *) malloc(1);
    arr[0] = 0;
    for( int i = 0; i < sizeof(arr); i++) {
        printf("%x ", arr[i]);
    }

    while( yn == 0 ) {

        printf("Enter a number: ");
        scanf("%d", &num);
        if( arr[0] == 0) {
            arr[0] = num;
            printf("%d\n", sizeof(arr));
        } else {
            arr = (char *) realloc(arr, (sizeof(arr) + 1));
            arr[sizeof(arr) + 1] = num;
            printf("%d\n", sizeof(arr));
        }

        for( int i = 0; i < sizeof(arr); i++) {
            printf("%d ", arr[i]);
        }
        printf("\nDo you want to enter another number? (Y/N) : ");
        scanf("%s", ans);
        yn = strcmp(ans, yes);

    }

    free(arr);
