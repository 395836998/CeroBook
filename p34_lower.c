#include <stdio.h>

int lower(int upper);

int main(){

	int c;
	while( (c=getchar()) != EOF){
		putchar(lower(c));
	}

	return 0;
}

int lower(int upper){
	if(upper>='A' && upper<='Z'){
		return upper + 'a' - 'A';
	}
	return upper;
}

