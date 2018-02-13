//
//  task1.c
//  1
//
//  Created by Igor T on 12/12/17.
//  Copyright © 2017 appmasters. All rights reserved.
//

#include "task1.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 25

static int compare (const void *a, const void *b)
{
    if (strlen(*(char **) a) > strlen(* (char **) b) )
    {
        return 1;
    } else {
        return -1;
    }
}

void lineSort(const char *str[], int size)
{
//    здесь мы с помощью функции   qsort сортируем каждую из строк по увеличению для этого в строке 17 мы добираемся до каждой из строк и сортируем их по длине с помощью вот этой конструкции strlen(*(char **) a)
    
    qsort( str, size, sizeof(char *),  compare);
    
}
    
void printLines(const char *str[], int size)
{
//    здесь мы печатаем уже отсортированный массив
    for (int i = 0; i < size; i++) {
        printf("line %d is : %s", i, str[i]);
    }
}
