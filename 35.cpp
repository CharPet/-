#include <stdio.h>

int main() {
    int num, firstDigit, secondDigit, reversedNumber, sum;

    printf("Dose enan arithmo: ");
    scanf_s("%d", &num);

    if (num < -99 || (num > -10 && num < 10) || num > 99) {
        printf("O arithmos den einai dipshfios.\n");
        return 1; // Termatismos programmatos
    }

    // Ypologismos psifion
    firstDigit = num / 10;
    secondDigit = num % 10;

    // Antistrofi kai athroisma
    reversedNumber = secondDigit * 10 + firstDigit;
    sum = firstDigit + secondDigit;

    // Emfanisi apotelesmaton
    printf("H antistrofi tou arithmou %d einai: %d\n", num, reversedNumber);
    printf("To athroisma ton dyo psifion einai: %d\n", sum);

    return 0;
}
