#include <stdio.h>

int atoi(char s[]);

int main(){
	char s[10];

	int c, number;
	int i = 0;

	while( (c=getchar()) != EOF && c != '\n'){
		s[i++] =  c;
	}

	s[i] = '\0';

	number = atoi(s);
	
	printf("%d\n", number+1);
	return 0;
}


int atoi(char s[]){
	int i, n;
	n = 0;
	for(i=0; s[i]>='0' && s[i]<='9'; i++){
		//每输入后一个数字，前一个数字就会进位，所以乘以了10
		n = 10*n + (s[i]-'0');
	}
	return n;
}
