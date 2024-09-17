#include <stdio.h>
#include <math.h>

// Fungsi untuk memeriksa apakah bilangan adalah bilangan prima
int is_prime(int n) {
    if (n <= 1) return 0; // Angka kurang dari atau sama dengan 1 bukan bilangan prima
    if (n <= 3) return 1; // 2 dan 3 adalah bilangan prima

    if (n % 2 == 0 || n % 3 == 0) return 0; // Bilangan yang habis dibagi 2 atau 3 bukan bilangan prima

    // Memeriksa faktor dari 5 hingga sqrt(n)
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }

    return 1; // Jika tidak ada faktor, maka bilangan adalah prima
}

int main() {
    int n;

    // Membaca input
    scanf("%d", &n);

    // Memeriksa dan mencetak hasil
    if (is_prime(n)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }

    return 0;
}