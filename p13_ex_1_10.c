#include <stdio.h>

#define FLAG '\0'
main(){
	int c, lastc=FLAG;

	while( (c=getchar()) != EOF){
		if(c == '\t'){
			printf("\\t");
		}else if(c == '\b'){
			printf("\\b");
		}else if(c == '\\'){
			printf("\\\\");
		}else{
			putchar(c);
		}
	}
}
