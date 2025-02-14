#include <stdio.h>

int main()
{
    int x, y, sum = 0;

    printf("Eisagete enan akeraio arithmo:\n");
    scanf_s("%d", &x);

    printf("Eisagete enan deutero akeraio arithmo:\n");
    scanf_s("%d", &y);

    sum = x + y;

    printf("To athroisma ton dyo arithmon sthn dekadiki morfi: %d\n", sum);
    printf("To athroisma ton dyo arithmon sthn oktadikh morfi: %o\n", sum);
    printf("To athroisma ton dyo arithmon sthn dekaexadiki morfi: %X\n", sum);

    return 0;
}
