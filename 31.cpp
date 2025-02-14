#include <stdio.h>

int power(int base, int exponent) {

	if (exponent == 0) {
		// Βάση της αναδρομής: Οποιοσδήποτε αριθμός στη δύναμη του 0 είναι 1
		return 1;
	}
	else {
		// Αναδρομική κλήση: a * (a^(b-1))
		return base * power(base, exponent - 1);

		/*
		*  Κλήσεις:
		*
		*  Κλήση 1 : power(3, 5); -> 3 * power(3, 4)
		*  Κλήση 2 : power(3, 4); -> 3 * power(3, 3)
		*  Κλήση 3 : power(3, 3); -> 3 * power(3, 2)
		*  Κλήση 4 : power(3, 2); -> 3 * power(3, 1)
		*  Κλήση 5 : power(3, 1); -> 3 * power(3, 0)
		*  Κλήση 6 : power(3, 0); -> 1 (βάση της αναδρομής)
		*
		*  Επιστροφές:
		*
		*  Η βάση της αναδρομής επιστρέφει 1 για την συνάρτηση power(3, 1) και
		*  ισούται με 3 * 1 = 3
		*  Η συνάρτηση power(3, 2) επιστρέφει 3 * 3 = 9
		*  Η συνάρτηση power(3, 3) επιστρέφει 3 * 9 = 27
		*  Η συνάρτηση power(3, 4) επιστρέφει 3 * 27 = 81
		*  Η συνάρτηση power(3, 5) επιστρέφει 3 * 81 = 243
		*/
	}

}


int main() {

	int base;
	int exponent;
	int result;

	printf("Enter a base number: ");
	scanf_s("%d", &base);

	printf("Enter an exponent: ");
	scanf_s("%d", &exponent);

	result = power(base, exponent);

	printf("%d ^ %d = %d", base, exponent, result);


	return 0;
}

