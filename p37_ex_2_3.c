#include <stdio.h>

int htoi(char s[]);
int lower(int upper);

int main(){

	int c, number;
	char s[100];
	int i = 0;

	while( (c=getchar()) != EOF && c != '\n'){
		s[i] = lower(c);
		i++;
	}
	s[i] = '\0';

	number = htoi(s);
	
	printf("%d\n", number);
	return 0;
}

int lower(int upper){
	if(upper>='A' && upper<='Z'){
		return upper + 'a' - 'A';
	}
	return upper;
}

int htoi(char s[]){
	
	int i = 0;
	int result = 0;
	int digit;

	//把前面的0x忽略掉，不需要考虑大写，main中已经转换了
	if(s[i] == '0'){
		i++;
		if(s[i] == 'x'){
			i++;
		}
	}

	for(; s[i]!='\0'; i++){
		if(s[i]>='0' && s[i]<='9'){
			digit = s[i] - '0';
		}else if(s[i]>='a' && s[i]<='z'){
			digit = s[i] - 'a' + 10;
		}

		result = result * 16 + digit;
	}

	return result;
}


