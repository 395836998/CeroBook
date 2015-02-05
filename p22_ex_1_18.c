#include <stdio.h>

#define MAX_LEN 	1000


int getline(char line[], int max_len);
int delete(char line[]);

int main(){
	
	int c, d;
	char curr_line[MAX_LEN];

	while( (c=getline(curr_line, MAX_LEN)) != 0){
		printf("%d\n", c);
		if( (d=delete(curr_line)) > 0){
			printf("%s\n", curr_line);
			printf("%d\n", d);
		}
	}
	return 0;
}

int getline(char line[], int max_len){
	int i, j;
	int c;

	j = 0;
	for(i=0; (c=getchar())!=EOF && c!='\n'; i++){
		if(i<max_len-2){
			line[j] = c;
			j++;
		}
	}
	if(c == '\n'){
		line[j] = c;
		i++;
		j++;
	}
	line[j] = '\0';
	return i;
}

int delete(char line[]){
	int i = 0;
	while(line[i] != '\n'){
		i++;
	}
	
	//ºöÂÔ»»ĞĞ·û
	i--;

	while(i>=0 && (line[i]==' ' || line[i]=='\t') ){
		i--;
	}
	if(i >= 0){
		i++;
		line[i] = '\n';
		i++;
		line[i] = '\0';
	}
	return i;
}

