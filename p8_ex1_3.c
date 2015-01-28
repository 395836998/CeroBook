#include <stdio.h>

int main(){
	float fahr, cels;

	int max = 300;
	int step = 20;
	int i;

	printf("%s\t%s\n", "Fahrenheit", "Celsius");
	for(i=0; i<=max; i+=step){
		fahr = i;
		cels = (fahr-32.0) * 5.0 / 9.0;
		printf("%10.0f\t%7.1f\n", fahr, cels);
	}

	return 0;
}
