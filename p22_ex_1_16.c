#include <stdio.h>

//允许的输入行的最大长度
#define MAXLEN	1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);


int main(){
	
	int max_len; //最长
	char max_line[MAXLEN]; //最长行
	char curr_line[MAXLEN]; //当前行

	int c;

	while( (c=getline(curr_line, MAXLEN)) != 0){
		printf("==>%d\n", c);
	}
	return 0;
}


int getline(char line[], int maxline){
	int i, c;
	
	for(i=0; i<maxline-1 && (c=getchar())!=EOF && c!='\n'; i++){
		line[i] = c;
	}
	if(c == '\n'){
		line[i] = c;
		i++;
	}
	line[i] = '\0';
	return i;
}

void copy(char to[], char from[]){
	int i = 0;
	while( (to[i]=from[i]) != '\0'){
		i++;
	}
}



