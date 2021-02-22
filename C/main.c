#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define games 4
#define players 5
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int main() {
    int a[games][players], b, avg[] = { 0, 0, 0, 0, 0 }, q = 0, n = 0;

    for(int i = 0; i < games; i++) {
        printf("Game #%d\n", i + 1);

        for(int j = 0; j < players; j++) {
            printf("Enter scoring total for Player #%d: ", j + 1);
            scanf("%d", &b);
            a[i][j] = b;
            avg[j] += b;
        }
    }
    
    for(int k = 0; k < players; k++) //cal avg for each player
        avg[k] /= 4;

    for(int l = 0; l < players; l++) //cal max avg value
        n = MAX(n, avg[l]);

    for(int m = 0; m < players; m++) //find max avg player number
        if (n == avg[m]) q = m + 1;

    printf("The player with the highest average is player no. %d with %d points.", q, n);

    return(0);
}
