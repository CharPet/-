#include <stdio.h>

int main() {
    int matrix[5][5];  // Δημιουργία πίνακα διαστάσεων 5x5
    int i, j;

    // Εισαγωγή στοιχείων στον πίνακα από τον χρήστη
    printf("Eisagetai 25 akeraious arithmous ston pinaka:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf_s("%d", &matrix[i][j]);
        }
    }

    // Εκτύπωση όλων των στοιχείων του πίνακα
    printf("\nTa stoixeia tou pinaka einai:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Εκτύπωση της κύριας διαγωνίου
    printf("\nStoixeia tis kyrias diagoniou:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");

    // Εκτύπωση της αναστροφής διαγωνίου
    printf("\nStoixeia tis anastrofis diagoniou:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", matrix[i][4 - i]);
    }
    printf("\n");

    return 0;
}
