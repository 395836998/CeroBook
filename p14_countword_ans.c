#include <stdio.h>

#define IN 	1
#define OUT 0

int main(){
	int c;
	int nchar, nline, nword, state;

	state = OUT;
	nchar = nline = nword = 0;

	while( (c=getchar()) != EOF) {
		nchar++;
		if(c == '\n'){
			nline++;
		}

		if(c==' ' || c=='\t' || c=='\n'){
			state = OUT;
		}else if(state == OUT){
			state = IN;
			nword++;
		}
	}
	printf("char:%d, line:%d, word:%d\n", nchar, nline, nword);
	return 0;
}
