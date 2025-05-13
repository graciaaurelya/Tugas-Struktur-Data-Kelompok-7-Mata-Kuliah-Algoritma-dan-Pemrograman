#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

// Fungsi push
void push(int val) {
    if (top < MAX - 1) {
        stack[++top] = val;
    }
}

// Fungsi pop
int pop() {
    if (top >= 0) {
        return stack[top--];
    }
    return -1;
}

// Fungsi untuk menghapus elemen tengah secara rekursif
void deleteMidUtil(int curr, int mid) {
    if (top == -1) return;

    int x = pop();

    if (curr != mid) {
        deleteMidUtil(curr + 1, mid);
        push(x);  // Kembalikan elemen selain tengah
    }
    // Jika curr == mid, kita tidak push kembali -> elemen tengah dihapus
}

void deleteMid() {
    int size = top + 1;
    int mid = size / 2; // 0-based indexing dari atas
    deleteMidUtil(0, mid);
}

int main() {
    // Isi stack
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    deleteMid();

    // Cetak stack dari atas ke bawah
    while (top >= 0) {
        printf("%d ", pop());
    }

    return 0;
}
