#include <stdio.h>

int main(){
	float fahr, cels;
	int step = 20;
	int max = 300;
	int i;

	for(i=0; i<=max; i+=step){
		fahr = i;
		cels = (fahr-32.0) * 5.0 / 9.0;
		printf("%3.0f %6.1f\n", fahr, cels);
	}
	return 0;
}
