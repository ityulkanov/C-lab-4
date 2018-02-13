
#include <stdio.h>
#include "task3.h"
#define N 30
int main() {
    char line[N];
    printf("Please enter your line: \n");
    fgets(line, N, stdin);
    if (isPalindrome(line)) {
        printf("it is Palindrome! \n");
    } else {
        printf("it is not a palindrome \n"); 
    }
    return 0;
}
