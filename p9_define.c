#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(){
	float fahr, cels;

	int i;

	printf("Celsius  Fahr\n");
	for(i=UPPER; i>=LOWER; i-=STEP){
		cels = i;
		fahr = (cels * 9.0) / 5.0 + 32.0;
		printf("%3.0f  %6.1f\n", cels, fahr);
	}
	return 0;
}

