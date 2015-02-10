#include <stdio.h>

int main(){
	enum loop {YES, NO};
	enum loop ok = YES;

	int	i = 0;
	int c, lim = 20;
	char s[20];

	while(ok == YES){
		if(i >= lim-1){
			ok = NO;
		}else if( (c=getchar()) == '\n'){
			ok = NO;
		}else if(c == EOF){
			ok = NO;
		}else {
			s[i] = c;
			++i;
		}
	}
	printf("%d\n", i);
}
