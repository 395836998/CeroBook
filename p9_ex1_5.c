#include <stdio.h>

int main(){
	float fahr, cels;

	int max = 300;
	int step = 20;
	int i;

	printf("Celsius  Fahr\n");
	for(i=max; i>=0; i-=step){
		cels = i;
		fahr = (cels * 9.0) / 5.0 + 32.0;
		printf("%3.0f  %6.1f\n", cels, fahr);
	}
	return 0;
}

