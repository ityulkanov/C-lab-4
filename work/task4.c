//
//  task4.c
//  lab4task4
//
//  Created by Igor T on 12/29/17.
//  Copyright © 2017 appmasters. All rights reserved.
//

#include "task4.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 100

static int compare (const void *a, const void *b)
{
    if (strlen(*(char **) a) > strlen(* (char **) b) )
    {
        return 1;
    } else {
        return -1;
    }
}

void chomp (char *buf)
{
    if (buf[strlen(buf)-1]=='\n')
        buf[strlen(buf)-1]=0;
}


void lineSort(char *str[], int size)
{
    //    здесь мы с помощью функции   qsort сортируем каждую из строк по увеличению для этого в строке 17 мы добираемся до каждой из строк и сортируем их по длине с помощью вот этой конструкции strlen(*(char **) a)
    
    qsort( str, size, sizeof(char *),  compare);
    
}

void printLinesToFile (char *str[], int size, FILE *fp) {
    for (int i = 0 ; i < size; i++) {
        fprintf(fp, "%s\n", str[i]); 
    }
}
