#include <stdio.h>
#include <stdlib.h>

int findJudge(int n, int** trust, int trustSize) {
    int* count = (int*)calloc(n + 1, sizeof(int));
    if (!count) return -1;

    for (int i = 0; i < trustSize; i++) {
        int a = trust[i][0];
        int b = trust[i][1];
        count[a]--; // a mempercayai seseorang
        count[b]++; // b dipercaya oleh seseorang
    }

    for (int i = 1; i <= n; i++) {
        if (count[i] == n - 1) {
            free(count);
            return i;
        }
    }

    free(count);
    return -1;
}

int main() {
    int n, trustSize;

    printf("Masukkan jumlah orang (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Input n tidak valid.\n");
        return 1;
    }

    printf("Masukkan jumlah pasangan kepercayaan (trustSize): ");
    if (scanf("%d", &trustSize) != 1 || trustSize < 0) {
        fprintf(stderr, "Input trustSize tidak valid.\n");
        return 1;
    }

    int** trust = (int**)malloc(trustSize * sizeof(int*));
    if (!trust) {
        fprintf(stderr, "Gagal mengalokasikan memori untuk trust.\n");
        return 1;
    }

    for (int i = 0; i < trustSize; i++) {
        trust[i] = (int*)malloc(2 * sizeof(int));
        if (!trust[i]) {
            fprintf(stderr, "Gagal mengalokasikan memori untuk trust[%d].\n", i);
            return 1;
        }
        printf("Masukkan pasangan kepercayaan ke-%d (format: a b): ", i + 1);
        if (scanf("%d %d", &trust[i][0], &trust[i][1]) != 2) {
            fprintf(stderr, "Input pasangan kepercayaan tidak valid.\n");
            return 1;
        }
    }

    int judge = findJudge(n, trust, trustSize);
    printf("Output: %d\n", judge);

    for (int i = 0; i < trustSize; i++) {
        free(trust[i]);
    }
    free(trust);

    return 0;
}
