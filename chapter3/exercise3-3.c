/*
    Exercise 3-3: Write a function expand(s1,s2) that expands shorthand notations like a-z in the
    string s1 into the equivalent complete list abc...xyz in s2. 
    EX: a-d = abcd
*/
#include <stdio.h>

#define BUFFER 256

void expand(char[], char[]);

int main(void){
    char input[BUFFER];
    char output[BUFFER];

    int i;
    for(int c = i = 0; i < BUFFER-1 && (c = getchar()) != EOF && c != '\0'; ++i)
        input[i] = c;
    input[i] = '\0';

    expand(input, output);
    printf("%s\n", output);
    return 0;
}

void expand(char s1[], char s2[]){
    char from, to;
    int j = 0;
    from = (s1[0] == '-') ? s1[1] : s1[0];
    to = 0;

    for(int i=0; s1[i] != '\0'; ++i)
        if(s1[i] == '-')
            to = s1[i+1];           
        
    for(int diff = to-from; j <= diff; ++j)
        s2[j] = from+j;

    s2[j] = '\0';
}