#include <stdio.h>

int main()
{
	float avg = 0;
	int sum = 0;
	int count = 0;
	int num;

	printf("Eisagete akeraious arithmous (termatiste me to 0):\n");
	

	while (1) {

		printf("Eisagete akeraio: ");
		scanf_s("%d", &num);

		if (num == 0) {
			break;
		}

		sum += num;
		count++;
		avg = (float)sum / count;

		printf("Athroisma akeraion: %d\n", sum);
		printf("Synolo akeraion: %d\n", count);
		printf("Mesos oros tou synolou: %.2f\n", avg);
		printf("------------------------------\n\n");

	}

	printf("Termatismos programmatos.\n");

	return 0;
}

