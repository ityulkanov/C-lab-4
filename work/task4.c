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

void chomp (char *buf)
{
    if (buf[strlen(buf)-1]=='\n')
        buf[strlen(buf)-1]=0;
}


void printLinesToFile (char *str[], int size, FILE *fp) {
    for (int i = 0 ; i < size; i++) {
        fprintf(fp, "%s\n", str[i]); 
    }
}
