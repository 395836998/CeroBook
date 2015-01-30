#include <stdio.h>

main(){
	int c, lastc='\0';

	while( (c=getchar()) != EOF){
		if(c != ' '){
			putchar(c);
		}else if(lastc != ' '){
			putchar(c);
		}
		lastc = c;
	}
}
