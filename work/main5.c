#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 50
int n, i, min, max, buf = 0;
char line;
char *old;
char *young;
char arr[N][N];

int enterRelatives () {
    int relatives = 0;
    do {
        fflush(stdin);
        printf("Please, enter number of relatives\n");
        relatives = scanf("%d", &n);
        if (!(relatives)|| (n < 0) ) {
            printf("This is not a correct number\n");
        }
        
    } while ((!relatives)|| (n < 0));
    return n;
}
int main() {
    n = enterRelatives();
    young = old = 0;
    while (i < n) {
        printf("Please, enter your %d relative's name\n", i+1);
        scanf("%s", arr[i]);
        printf("Please, enter %s's age\n", arr[i]);
        scanf("%d", &buf);
        if ((buf < min) || (i == 0)) {
            min = buf;
            young = arr[i];
        } else if (buf > max) {
            max = buf;
            old = arr[i];
        }
        i++;
    }
    printf("The oldest relative is %s, his age is %d, the youngest relative is %s, his age is %d\n", old, max, young, min);
    return 0;
}
