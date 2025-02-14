#include <stdio.h>

int main() {
	
	int num;
	unsigned long long factorial = 1;
	
	printf_s("Dose akeraio: ");
	scanf_s("%d", &num);

	if (num < 0) {
		printf_s("O paragontikos den orizetai gia arnhtikous arithmous");
	}
	else {
		for (int i = 1; i <= num; i++) {
			factorial *= i;
		}

		printf_s("O paragontikos tou %d einai %llu", num, factorial);
		
	}

	return 0;

}