#include <stdio.h>

#define MAX_LEN 1000

int getline(char line[], int max_len);
void reverse(char s[]);

int main(){
	
	int c;
	char curr_line[MAX_LEN];

	while( (c=getline(curr_line, MAX_LEN)) != 0){
		printf("%s => ", curr_line);
		reverse(curr_line);
		printf("%s\n", curr_line);
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

void reverse(char s[]){
	int i, j;
	char temp;

	i = j = 0;

	//ͳ���ַ�����ĳ���
	while(s[i] != '\0'){
		i++;
	}

	//ȥ������\0
	i--;

	//ȥ��\n
	if(s[i] == '\n'){
		i--;
	}
	
	while(j < i){
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j++;
		i--;
	}
}
