#include "task3.h"
#include <string.h>


int isPalindrome(char * str) {
    int flag = 0;
    char *start;
    char *end;
    int i = 0;
    
    int x = 0;
    x = strlen(str) - 1 ;
    
    for (start = str, end = start + (x-1); i < x / 2 ; i++)
    {
        if (*start != *end) {
            return 0;
        } else {
           flag = 1;
            start++;
            end--;
        }
        
    }
    
    return flag;
}
