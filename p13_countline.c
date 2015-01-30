#include <stdio.h>

int main(){
	int c;
	long nline = 0;
	while( (c=getchar()) != EOF){
		if(c == '\n'){
			nline++;
		}
	}
	printf("%ld\n", nline);
	return 0;
}

