#include <stdio.h>

main(){
	int c;
	int nblank, ntab, nline;

	nblank = ntab = nline = 0;

	while( (c=getchar()) != EOF){
		if(c == ' '){
			nblank++;
		}else if(c == '\t'){
			ntab++;
		}else if(c == '\n'){
			nline++;
		}
	}
	printf("blank counts:%d, tab counts:%d, line counts:%d\n", nblank, ntab, nline);

}


