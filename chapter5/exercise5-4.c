/*
	Exercise 5-4: Write the function strend(s,t), which returns 1 if the string t occurs
	at the end of the string s, and zero otherwise.
*/

#include <stdio.h>
#include <string.h>

#define MAX_BUFFER 1024

int strend(const char*, const char*);

int main(void){
	char *str = "helloworldio"; // 12 chars
	char *compare = "orldio";

	printf("%i\n", strend(str, compare));
	return 0;
}

int strend(const char *s, const char *t){ // if t is at the end of s
	int startat = (strlen(s)-1) - (strlen(t)-1);

	for(; s[startat]; ++startat)
		if(*t++ != s[startat])
			return 0;

	return 1;
}