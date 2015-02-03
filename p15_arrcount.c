#include <stdio.h>

int main(){
	
	int c, i, nwhite, nother;

	//0-9���ֵĳ��ִ���������������
	int  ndigit[10];
	
	//��ʼ��
	nwhite = nother = 0;
	for(i=0; i<10; i++){
		ndigit[i] = 0;
	}

	while( (c=getchar()) != EOF){
		if(c<='9' && c>='0'){
			//c-'0'��Ϊ��������֮�ֱ����������������
			ndigit[c-'0']++;
		}else if(c==' ' || c=='\t' || c=='\n'){
			nwhite++;
		}else{
			nother++;
		}
	}

	for(i=0; i<10; i++){
		printf(" %d", ndigit[i]);
	}
	printf(", white:%d, other:%d\n", nwhite, nother);
	return 0;
}
