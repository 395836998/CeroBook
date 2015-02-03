#include <stdio.h>

int main(){
	
	int c, i, nwhite, nother;

	//0-9数字的出现次数保存在数组中
	int  ndigit[10];
	
	//初始化
	nwhite = nother = 0;
	for(i=0; i<10; i++){
		ndigit[i] = 0;
	}

	while( (c=getchar()) != EOF){
		if(c<='9' && c>='0'){
			//c-'0'即为两个数字之差，直接拿来做数组索引
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
