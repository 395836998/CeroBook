#include <stdio.h>

int main(){
	
	int c, lastc=' ';
	int nchar, nline, nword;

	nchar = 0;
	nline = 0;
	nword = 0;

	while( (c=getchar()) != EOF){
		nchar++;
		if(c == '\n'){
			nline++;
		}
		if(lastc!=' ' && lastc!='\t' && lastc!='\n'
				&& (c==' ' || c=='\t' || c=='\n')){
			nword++;
		}
		lastc = c;
	}
	printf("char:%d, line:%d, word:%d\n", nchar, nline, nword);
	
	return 0;
}
