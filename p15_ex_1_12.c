#include <stdio.h>

#define IN 	1
#define OUT 0


int main(){
	
	int c;
	int state = OUT;

	while((c=getchar()) != EOF){
		
		//如果是一个单词分隔符
		if(c==' ' || c=='\t' || c=='\n'){
			//看看是不是一个单词的末尾，即之前是否在一个单词内
			if(state == IN){
				//是则输出换行，并标识单词结束
				putchar('\n');
				state = OUT;
			}
		}else if(state == OUT){
			//如果不是单词分隔符，则是一个普通字符
			//如果之前处在单词结束状态，则要标识单词开始
			state = IN;
			putchar(c);
		}else{
			//如果不是单词分隔符，之前也不是单词结束状态，则普通输出
			putchar(c);
		}
	}
	return 0;
}
