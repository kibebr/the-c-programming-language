/*
	Exercise 5-3: Implement strcat.c using pointers
*/

#include <stdio.h>

#define MAX_BUFFER 1024

void _strcat(char*, const char*);

int main(void){
	char str[MAX_BUFFER] = "hello\0";

	_strcat(str, " world!");

	printf("%s\n", str);
	return 0;
}

void _strcat(char *dest, const char *src){
	int i, j;

	for(i = 0; dest[i]; ++dest) // points dest to the end of the string
		;

	for(j = 0; src[j]; ++j) // copies src into dest (dest is at its end now)
		dest[j] = src[j];

	dest[j] = '\0';
}