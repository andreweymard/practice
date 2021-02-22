#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable : 4996)

//my take on a dynamic array

int main()
{
    unsigned int x = 0, tail = 0, head = 0, coin = 0;
    time_t t;

    printf("How many times would you like to flip the coin? \n");
    scanf("%d \n", &x);

    for (unsigned int i = 0; i <= x; i++) {
        srand((unsigned) time(&t));
        coin = rand() % 2;
        _sleep(100);
        if (coin == 1) { tail++; } else { head++;}
    }

    printf("Heads: %d, Tails: %d ", head, tail);

    return(0);
}
