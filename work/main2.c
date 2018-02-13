//
//  main.c
//  2
//
//  Created by Igor T on 12/12/17.
//  Copyright © 2017 appmasters. All rights reserved.
//

#include <stdio.h>
#include "task2.h"
#define N 200

int main() {
    char in[N];
    char out[N];
    printf("Please enter your line\n");
    fgets(in,N,stdin);
    reverseWords(in, out); 
    printf("Here is an updated line\n %s", out);
    return(0);
}
