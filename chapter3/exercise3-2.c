/*
    Exercise 3-2: Write a function escape(s, t) that converts characters like newline and tab into
    visible escape sequences like \n and \t as it copies the string t to s. Use a switch.

*/

#include <stdio.h>

#define MAX_BUFFER 1000

void escape(char s[], char t[]);

int main(void){

    char sample[] = "Hello\tworld\n";
    char new[MAX_BUFFER+1];

    escape(new, sample);

    printf("%s\n", new);

    return 0;
}

void escape(char s[], char t[]){ // s = new, t = old
    int newindex;

    for(int curr = newindex = 0; curr < MAX_BUFFER-1 && t[curr] != '\0'; ++curr, ++newindex){
        switch(t[curr]){
            case '\n':
                s[newindex++] = '\\';
                s[newindex++] = 'n';
                break;
            case '\t':
                s[newindex++] = '\\';
                s[newindex++] = 't';
                break;
        }

        s[newindex] = t[curr];
    }

    s[newindex] = '\0';
}