#include <stdio.h>
#include <stdlib.h>

// Fungsi perbandingan untuk qsort
int compare(const void *a, const void *b) {
    return ((int)a - (int)b);
}

int main() {
    int N;

    // Membaca jumlah nilai
    scanf("%d", &N);

    // Alokasi memori untuk array nilai
    int nilai = (int)malloc(N * sizeof(int));
    if (nilai == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Membaca nilai-nilai
    for (int i = 0; i < N; i++) {
        scanf("%d", &nilai[i]);
    }

    // Mengurutkan nilai-nilai
    qsort(nilai, N, sizeof(int), compare);

    // Mencetak nilai-nilai yang sudah diurutkan
    for (int i = 0; i < N; i++) {
        printf("%d\n", nilai[i]);
    }

    // Membebaskan memori
    free(nilai);

    return 0;
}