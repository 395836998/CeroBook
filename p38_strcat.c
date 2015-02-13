#include <stdio.h>

#define M	100
#define N	20

void strcat(char s[], char t[]);

int main(){
	char s[M];
	char t[N];

	int c, i=0;

	while(i<M-1 && (c=getchar()) != EOF && c != '\n'){
		s[i++] = c;
	}
	s[i] = '\0';

	i = 0;
	while(i<N-1 && (c=getchar()) != EOF && c != '\n'){
		t[i++] = c;
	}
	t[i] = '\0';

	strcat(s, t);

	printf("%s\n", s);
	return 0;
}

void strcat(char s[], char t[]){
	int i, j;
	i = j = 0;

	while(s[i] != '\0'){
		i++;
	}
	
	while( (s[i++] = t[j++]) != '\0');
}
