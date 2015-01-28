#include <stdio.h>

int main(){
	int fahr, cels;
	int i;

	for(i=0; i<=300; i+=20){
		fahr = i;
		cels = ( (fahr-32) * 5) / 9;
		printf("%3d\t%3d\n", fahr, cels);
	}
	
	return 0;
}
