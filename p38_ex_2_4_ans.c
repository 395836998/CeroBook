#include <stdio.h>

#define N	20

void squeeze(char s1[], char s2[]);

int main(){
	char s1[N];
	char s2[N];

	int c, i=0;

	while(i<N-1 && (c=getchar()) != EOF && c != '\n'){
		s1[i++] = c;
	}
	s1[i] = '\0';
	
	i = 0;
	while(i<N-1 && (c=getchar()) != EOF && c != '\n'){
		s2[i++] = c;
	}
	s2[i] = '\0';
	
	squeeze(s1, s2);

	printf("%s\n", s1);

	return 0;
}

void squeeze(char s1[], char s2[]){
	int i, j, k;

	for(i=k=0; s1[i]!='\0'; i++){
	
		//����s2�������Ƿ���Ԫ����s1��ǰԪ����ȣ����û����������s2�����
		for(j=0; s2[j]!='\0' && s2[j]!=s1[i]; j++);
		//�˿̼��s2�Ƿ�Ϊ��������֪��s1Ԫ���Ƿ���s2��
		if(s2[j] == '\0'){
			s1[k++] = s1[i];
		}
	}

	s1[k] = '\0';
}
	
