#include <stdio.h>

#define  N 	20


int main(){
	
	char line[N];
	int c, count = 0;
	int i, pos;

	while((c=getchar()) != EOF){
		line[count] = c;
		count++;

		if(count == N){
			for(i=N-1; i>=0; i--){
				if(line[i] != ' ' && line[i] != '\t'){
					pos = i;
					break;
				}
			}

			for(i=0; i<=pos; i++){
				putchar(line[i]);
			}
			putchar('\n');

			count = 0;
			for(i=pos+1; i<N; i++){
				line[count] = line[i];
				count++;
			}
		}else if(c == '\n'){
			for(i=0; i<count; i++){
				putchar(line[i]);
			}

			count = 0;
			for(i=0; i<N; i++){
				line[i] = '\0';
			}
		}
	}

	return 0;
}
