#include <stdio.h>

// Συνάρτηση swap για την ανταλλαγή δύο στοιχείων
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Συνάρτηση partition που χωρίζει τον πίνακα και επιστρέφει τη θέση του πιβότ
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Επιλογή του πιβότ (στοιχείο στο τέλος)
    int i = (low - 1);  // Επιλογή του αρχικού σημείου του i

    for (int j = low; j <= high - 1; j++) {
        // Αν το τρέχον στοιχείο είναι μικρότερο από το πιβότ
        if (arr[j] < pivot) {
            i++;  // Αυξάνουμε το i
            swap(&arr[i], &arr[j]);  // Κάνουμε ανταλλαγή των στοιχείων arr[i] και arr[j]
        }
    }
    swap(&arr[i + 1], &arr[high]);  // Τοποθετούμε το πιβότ στη σωστή θέση
    return (i + 1);  // Επιστρέφουμε τη θέση του πιβότ
}

// Συνάρτηση γρήγορης ταξινόμησης
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);  // Βρίσκουμε τη θέση του πιβότ

        // Εφαρμόζουμε τη γρήγορη ταξινόμηση στα αριστερά και δεξιά υποσύνολα του πιβότ
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = { 10, 7, 8, 9, 1, 5 };  // Αρχικός πίνακας
    int n = sizeof(arr) / sizeof(arr[0]);  // Υπολογισμός μεγέθους του πίνακα

    quickSort(arr, 0, n - 1);  // Κλήση της συνάρτησης γρήγορης ταξινόμησης

    // Εκτύπωση του ταξινομημένου πίνακα
    printf("Taxinomimenos pinakas: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
