#include <stdio.h>

#define IN 	1
#define OUT 0


int main(){
	
	int c;
	int state = OUT;

	while((c=getchar()) != EOF){
		
		//�����һ�����ʷָ���
		if(c==' ' || c=='\t' || c=='\n'){
			//�����ǲ���һ�����ʵ�ĩβ����֮ǰ�Ƿ���һ��������
			if(state == IN){
				//����������У�����ʶ���ʽ���
				putchar('\n');
				state = OUT;
			}
		}else if(state == OUT){
			//������ǵ��ʷָ���������һ����ͨ�ַ�
			//���֮ǰ���ڵ��ʽ���״̬����Ҫ��ʶ���ʿ�ʼ
			state = IN;
			putchar(c);
		}else{
			//������ǵ��ʷָ�����֮ǰҲ���ǵ��ʽ���״̬������ͨ���
			putchar(c);
		}
	}
	return 0;
}
