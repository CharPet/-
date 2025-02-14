#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push(int x) {
    if (top < MAX - 1) {
        stack[++top] = x;
        printf("Προστέθηκε το %d στην στοίβα\n", x);
    }
    else {
        printf("Η στοίβα είναι γεμάτη\n");
    }
}

int pop() {
    if (top == -1) {
        printf("Η στοίβα είναι άδεια\n");
        return -1;
    }
    else {
        return stack[top--];
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    printf("Αφαιρέθηκε το %d από την στοίβα\n", pop());
    return 0;
}