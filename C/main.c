#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    printf("This array has %d elements.\n", (sizeof(arr)/sizeof(arr[0])));

    return 0;
}
