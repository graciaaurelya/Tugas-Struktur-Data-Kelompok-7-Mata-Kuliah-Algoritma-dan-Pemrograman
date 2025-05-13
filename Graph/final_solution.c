#include <stdio.h>

#define MAX_N 1000

int main() {
    int n, trustSize;
    int trusts[MAX_N + 1] = {0};
    int trusted_by[MAX_N + 1] = {0};

    printf("Masukkan jumlah orang (n): ");
    scanf("%d", &n);

    printf("Masukkan jumlah pasangan kepercayaan: ");
    scanf("%d", &trustSize);

    printf("Masukkan pasangan kepercayaan (format: a b):\n");
    for (int i = 0; i < trustSize; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        trusts[a]++;
        trusted_by[b]++;
    }

    for (int i = 1; i <= n; i++) {
        if (trusts[i] == 0 && trusted_by[i] == n - 1) {
            printf("Output: %d\n", i);
            return 0;
        }
    }

    printf("Output: -1\n");
    return 0;
}
