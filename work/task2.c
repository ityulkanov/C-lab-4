//
//  task2.c
//  2
//
//  Created by Igor T on 12/12/17.
//  Copyright © 2017 appmasters. All rights reserved.
//

#include "task2.h"


char * reverseWords(char * in, char *out){
    
    char * ptrs[100] = { NULL };
    int inWord = 0;
    int j = 0;
    int i = 0;
    while (in[i]) {
        if (in[i] != ' ' && inWord == 0) {
            inWord = 1;
           ptrs[j]= in+i;
            j++;
        } else if (in[i] >= 97 && in[i] <= 122) {
            i++;
            continue;
        }
        else {
            inWord = 0;
        }
         i++;
    }
    for (j; j > 0; j--) {
        
        char *p;
        p = ptrs[j-1];
        while (*p != ' ' & *p != '\0') {
            *out++ = *p++;
        }
        *out++ = ' '; 
    }
    
    
    return out; 
}
