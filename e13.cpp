#include <stdio.h>

float calculateAverage(float x, float y) {
	return (x + y) / 2.0;
}

int main()
{
	float a, b;
	
	printf("Eisigage enan pragmatiko arithmo:\n");
	scanf_s("%f", &a);

	printf("Eisigage enan deutero pragmatiko arithmo:\n");
	scanf_s("%f", &b);

	printf("O mesos oros ton dyo arithmon einai: %.2f\n", calculateAverage(a, b));
	
	return 0;
}
