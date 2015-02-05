#include <stdio.h>

//����������е���󳤶�
#define MAXLEN	1000
//������ȴ���80��������
#define TAG 	80

int getline(char line[], int maxline);
void copy(char to[], char from[]);


int main(){
	
	int max_len; //�
	char max_line[MAXLEN]; //���
	char curr_line[MAXLEN]; //��ǰ��

	int c;

	while( (c=getline(curr_line, MAXLEN)) != 0){
		if(c > TAG){
			printf("==>%d: %s\n", c, curr_line);
		}
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



