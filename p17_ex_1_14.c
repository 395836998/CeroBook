#include <stdio.h>

//����ֻ�ܴ���26��Ӣ����ĸ
#define MAXCHAR 26 

//��ӡ�����и����ַ�����Ƶ�ȵ�ֱ��ͼ
int main(){
	
	int c, i, j, temp;
	int nchar[MAXCHAR];

	for(i=0; i<MAXCHAR; i++){
		nchar[i] = 0;
	}

	while( (c=getchar()) != EOF){
		if(c>='a' && c<='z'){
			nchar[c-'a']++;
		}
	}

	for(i=0; i<MAXCHAR; i++){
		printf("%c: ", 'a'+i);
		for(j=0; j<nchar[i]; j++){
			putchar('*');
		}
		putchar('\n');
	}
	return 0;
}
