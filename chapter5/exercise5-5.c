/*
	Exercise 5-6: Implementations of strncpy, strncat and strncat
*/

#include <stdio.h>

#define MAX_BUFFER 1024

void _strncpy(char *dest, const char* src, size_t n);
void _strncat(char *dest, const char* src, size_t n);
int _strncmp(const char *s1, const char *s2, size_t n);

int main(void)
{
	char *from = "hello world";
	char to[MAX_BUFFER];
	_strncpy(to, from, 5);
	printf("%s\n", to);

	char copied[MAX_BUFFER] = "hello";
	_strncat(copied, " world", 6);
	printf("%s\n", copied);

	char *s1 = "hello";
	char *s2 = "he3lo";
	printf("%i\n", _strncmp(s1, s2, 2));
}

void _strncpy(char *d, const char* s, size_t n)
{
	int i;
	for(i = 0; i < n; ++i)
		*d++ = *s++;
	d[i-n] = '\0';
}

void _strncat(char *d, const char *s, size_t n)
{
	int i, j;

	for(i = 0; d[i] != '\0'; ++i) // goes to the end of d string
		;

	while(n--)
		d[i++] = *s++;

	d[i] = '\0';
}

int _strncmp(const char *s1, const char *s2, size_t n)
{
	while(n--)
		if(*s1++ != *s2++)
			return 1;

	return 0;
}