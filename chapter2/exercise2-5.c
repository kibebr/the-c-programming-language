/*
    Exercise 2-5: Write a function any(s1, s2) that returns the first location in the string s1 
    where any character in a string s2 occurs
*/
#include <stdio.h>

int any(char[], char[]);

int main(void){
    char sample[] = "cagando e andando";
    char findLoc[] = "ag";

    printf("%i\n", any(sample, findLoc));
}

int any(char s[], char k[]){
    for(int i=0; s[i] != '\0'; ++i){
        for(int r=0; k[r] != '\0'; ++r){
            if(s[i] == k[r]){
                return i;
            }
        }       
    }

    return -1;
}
