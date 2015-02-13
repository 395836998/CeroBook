#include <stdio.h>

#define N	20

void squeeze(char s[], int c);

int main(){
	char s[N];

	int c, i=0;

	while(i<N-1 && (c=getchar()) != EOF && c != '\n'){
		s[i++] = c;
	}
	s[i] = '\0';
	
	squeeze(s, 'y');

	printf("%s\n", s);

	return 0;
}

void squeeze(char s[], int c){
	int i, j;

	j = 0;
	for(i=0; s[i]!='\0'; i++){
		if(s[i] != c){
			s[j] = s[i];
			j++;
		}
	}
	s[j] = '\0';
}
