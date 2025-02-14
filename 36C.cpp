#include <stdio.h>

void swap(int* x, int* y);
void quicksort(int array[], int length);
void quicksort_recursion(int array[], int low, int high);
int partition(int array[], int low, int high);

int main() { 

	int a[] = { 10, 11, 23, 44, 8, 15, 3, 9, 12, 45, 56, 45, 45 }; // Πίνακας προς ταξινόμηση
	int length = sizeof(a) / sizeof(a[0]); // Υπολογισμός μεγέθους πίνακα

	quicksort(a, length);  // Κλήση της συνάρτησης quicksort

	// Εμφάνιση του ταξινομημένου πίνακα
	for (int i = 0; i < length; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}


// Συναρτηση για την ανταλλαγή δύο τιμών
void swap(int* x, int* y) {
	int temp = *x; // Αποθήκευση της τιμής του x σε μια προσωρινή μεταβλητή
	*x = *y; // Αντιγραφή της τιμής του y στη θέση του x
	*y = temp; // Αντιγραφή της τιμής του temp στη θέση του y
}

// Κύρια συνάρτηση για την εκτέλεση του Quicksort
void quicksort(int array[], int length) {
	// Κλήση της αναδρομικής συνάρτησης Quicksort
	quicksort_recursion(array, 0, length - 1);
}

// Αναδρομική συνάρτηση Quicksort
void quicksort_recursion(int array[], int low, int high) {
	if (low < high) {  // Ελέγχει αν το τμήμα του πίνακα έχει περισσότερα από ένα στοιχεία
		int pivot_index = partition(array, low, high); // Εύρεση του pivot
		// Αναδρομική ταξινόμηση των στοιχείων αριστερά και δεξιά του pivot
		quicksort_recursion(array, low, pivot_index - 1);
		quicksort_recursion(array, pivot_index + 1, high);
	}
}

// Συνάρτηση διαχωρισμού του πίνακα με βάση το pivot
int partition(int array[], int low, int high) {
	int pivot_value = array[high]; // Το pivot είναι το τελευταίο στοιχείο

	int i = low; // Δείκτης για την κατάλληλη θέση του επόμενου μικρότερου στοιχείου

	for (int j = low; j < high; j++) {  // Επανάληψη σε όλα τα στοιχεία εκτός του pivot
		if (array[j] <= pivot_value) { // Εάν το στοιχείο είναι μικρότερο ή ίσο του pivot
			swap(&array[i], &array[j]); // Ανταλλαγή θέσεων
			i++; // Μετακίνηση του δείκτη i
		}
	}

	swap(&array[i], &array[high]); // Ανταλλαγή του pivot με το πρώτο στοιχείο μεγαλύτερο από αυτό

	return i; // Επιστροφή της θέσης του pivot
}