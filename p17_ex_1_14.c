#include <stdio.h>

//假设只能处理26个英文字母
#define MAXCHAR 26 

//打印输入中各个字符出现频度的直方图
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
