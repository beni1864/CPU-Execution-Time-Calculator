#include <stdio.h>

void main() {
	float i;
	printf("Please select the computation you want to make: (1 = clock rate, 2 = CPU time)");
	scanf("%f", &i);
	if(i == 1){
		printf("You've selected clock rate. Please enter the duration of one clock cycle in seconds.");
		float c;
		scanf("%f", &c);
		float answer = 1.0/c;
		printf("The clock rate corresponding to this duration is: %0.1f Hertz", answer);
	} else {
		float t;
		float i;
		float c;

		printf("You've selected CPU Time. Please enter the duration of one clock cycle in seconds.");
		scanf("%f", &t);

		printf("Please enter the number of instructions in the program.");
		scanf("%f", &i);

		printf("Please enter the number of clock cycles per instruction.");
		scanf("%f", &c);

		printf("The CPU execution time corresponding to these parameters is: %0.1f seconds", t*i*c);
	}
}