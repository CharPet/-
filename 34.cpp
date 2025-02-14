#include <stdio.h>

int main() {

	int n = -3, i, k;
	float x = 3., y;

	printf("Dwse times: ");
	scanf_s("%d%f", &i, &y);
	// i = -3, y = 7;

	k = 3 / 5;
	printf("k = %d\n", k);
	// k = 0 akeraia diairesh;

	x = ++n;
	printf("x = %f\n", x);
	// n = -2, x = -2.0;

	x *= i;
	printf("x = %f\n", x);
	// x = -2.0 * (-3) = 6.0

	n = --k;
	printf("n = %d\n", n);
	// k = -1, n = -1

	y = n % i;
	printf("y = %f\n", y);
	// y = -1 % -3 = -1

	printf("%d\t%d\t%d\t%f\t%f\n", n, i, k, x, y);

	return 0;
}