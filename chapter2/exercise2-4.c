/*
	Exercise 2-4: Write an alternate version of squeeze(s1,s2), that deletes each character in s1
	that matches any character in the string s2.
*/

void squeeze(char[], char[]);

int main(void){
	char sample[] = "cagando e andando";
	char toremove[] = "ag";

	squeeze(sample, toremove);

	printf("%s\n", sample);

	return 0;
}

void squeeze(char s[], char k[]){
	int found, j;
	found = j = 0;

	for(int i=0; s[i] != '\0'; ++i){
		for(int r=0; k[r] != '\0'; ++r){
			if(s[i] == k[r]){
				found=1;
			}
		}

		if(!found){
			s[j++] = s[i];
		}

		found = 0;
	}
	s[j] = '\0';
}