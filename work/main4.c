
#define N 100
#define M 80

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task1.h"

int main() {
    char buf[N][M];
    char *c[N];
    int count = 0;
    FILE *fp;
    fp = fopen("/Users/igor/Desktop/1.txt", "r");
    if(NULL == fp)
    {
        fprintf(stderr, "Cannot open file");
        return 1;
    }
    
    while ((!feof(fp)) && count < N ) {
        fgets(buf[count], N, fp);
        chomp(buf[count]);
        c[count]=buf[count];
        count++;

    }
    
    fclose(fp);
    lineSort(c, count);
    fp = fopen("/Users/igor/Desktop/2.txt", "wt");
    printLinesToFile (c, count, fp);
    fclose(fp);
    return 0;
}
