# include <stdio.h>
# include <math.h>

int main() {
	int n;

	for (n = 50; n != 60; n++) {
		printf("%d \t %f \n", n, log(n));
	}

	return 0;
}