/* 
    Exercise 2-3: HEXADECIMAL TO DECIMAL CONVERTER
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

#define LIMIT 1024

unsigned long htoi(char s[], int len);

int main(void){
    char line[LIMIT+1];

    int i=0;
    for(int c=0; i<LIMIT-1 && (c = getchar()) != '\n' && c != EOF; ++i){
        line[i] = c;
    }
    line[i] = '\0';

    printf("%lu\n", htoi(line, i));
}

unsigned long htoi(char s[], int len){

    unsigned long total = 0;
    unsigned short currdigit = 0;
    int power = 0;

    for(int i=len; i>-1; --i){

        if(s[i] == 'X' || s[i] == 'x' || s[i] == 0){
            continue;
        }

        if(s[i] >= '0' && s[i] <= '9'){ // if it is a numerical char
            currdigit = s[i]-'0';
        }
        else{
            if(s[i] >= 'a' && s[i] <= 'z'){ // if it's a lower case char
                currdigit = s[i] - 'a';
            }
            else{ // if not, then we assume it is an upper case char (should I?)
                currdigit = s[i] - 'A';
            }

            currdigit+=10;
        }

        total += (currdigit * pow(16, power));

        ++power;
    }

    return total;
}