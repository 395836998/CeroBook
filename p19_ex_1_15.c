#include <stdio.h>


#define MAX 300
#define STEP 20

float fahr2cels(float fahr);


int main(){
	float fahr;
	int i;
	for(i=0; i<=MAX; i+=STEP){
		fahr = i;
		printf("%.0f\t%.1f\n", fahr, fahr2cels(fahr));		
	}
	return 0;
}

float fahr2cels(float fahr){
	float cels = (fahr+32.0) * 5.0 / 9.0;
	return cels;
}
