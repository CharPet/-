#include <stdio.h>

int main() {

	int num = 10;

	for (int i = 1; i <= num; i++) {

		if (i == 5) {
			printf("Paraleipsi stoixeiou me continue (%d)\n", i);
			continue;
		}
		else if (i == 8) {
			printf("Paraleipsi stoixeiou (%d) kai proori diakopi tou vroxou\n", i);
			break;
		}

		printf("%d\n", i);
	}

	return 0;
}