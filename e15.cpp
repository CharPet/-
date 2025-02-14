#include <stdio.h>

int main() {

	float c;

	printf("Fahrenheit\tCelsius\n");
	printf("------------------------\n");

	for (int f = -80; f <= 140; f += 20) {
		c = 5.0 * ((float)f - 32) / 9.0;
		printf("%d\t\t%.2f\n", f, c);
		printf("------------------------\n");
	}

	return 0;
}