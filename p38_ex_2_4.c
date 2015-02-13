#include <stdio.h>

#define N	20
#define FIND	1
#define NOTFIND	2

void squeeze(char s1[], char s2[]);

int main(){
	char s1[N];
	char s2[N];

	int c, i=0;

	while(i<N-1 && (c=getchar()) != EOF && c != '\n'){
		s1[i++] = c;
	}
	s1[i] = '\0';
	
	i = 0;
	while(i<N-1 && (c=getchar()) != EOF && c != '\n'){
		s2[i++] = c;
	}
	s2[i] = '\0';
	
	squeeze(s1, s2);

	printf("%s\n", s1);

	return 0;
}

void squeeze(char s1[], char s2[]){
	int i, j, k, flag;

	j = 0;

	for(i=0; s1[i]!='\0'; i++){
		flag = NOTFIND;

		for(k=0; s2[k]!='\0'; k++){
			if(s1[i] == s2[k]){
				flag = FIND;
				break;
			}
		}
		if(flag == NOTFIND){
			s1[j] = s1[i];
			j++;
		}
	}
	s1[j] = '\0';
}
	
