/*
    Exercise 2-10: Rewrite the function lower, which converts upper case letters to lower case, with
    a conditional expression instead of if-else.
*/

#include <stdio.h>

#define MAX_BUFFER 1024

char lower(const char);

int main(void){

    char sample[MAX_BUFFER+1];
    int i = 0;

    for(int c = 0; i < MAX_BUFFER-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        sample[i] = lower(c);

    sample[i] = '\0';

    printf("%s\n", sample);

    return 0;
}

char lower(const char c){
    return (c >= 'A' && c <= 'Z') ? c+'a'-'A' : c;
}