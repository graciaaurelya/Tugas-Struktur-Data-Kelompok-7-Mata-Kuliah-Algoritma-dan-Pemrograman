#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int data[MAX];
    int top;
} Stack;

// Operasi dasar
void push(Stack* s, int val) {
    if (s->top == MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    s->data[++s->top] = val;
}

int pop(Stack* s) {
    if (s->top == -1) {
        printf("Stack underflow\n");
        exit(1);
    }
    return s->data[s->top--];
}

int empty(Stack* s) {
    return s->top == -1;
}

// Hapus elemen tengah secara rekursif
void deleteMiddle(Stack* s, int current, int middle) {
    if (empty(s))
        return;

    int temp = pop(s);

    if (current != middle)
        deleteMiddle(s, current + 1, middle);
    else
        return; // Jangan push kembali elemen tengah

    push(s, temp);
}

// Cetak isi stack
void printStack(Stack* s) {
    while (!empty(s)) {
        printf("%d ", pop(s));
    }
    printf("\n");
}

// Fungsi utama
int main() {
    Stack s;
    s.top = -1;

    // Push elemen ke stack: 10, 20, 30, 40, 50
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);
    push(&s, 50);

    int n = s.top + 1;         // Banyak elemen
    int mid = n / 2;           // Posisi tengah (0-based)

    deleteMiddle(&s, 0, mid);  // Hapus elemen tengah

    // Output stack setelah penghapusan
    printStack(&s); // Output: 50 40 20 10

    return 0;
}
