#include <stdio.h>
#include <string.h>

int main() {
    char str1[101], str2[101];

    // Membaca input dua string
    scanf("%s", str1);
    scanf("%s", str2);

    // Mengambil panjang kedua string
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Mengecek kondisi identik
    if (len1 == len2 && strcmp(str1, str2) == 0) {
        printf("IDENTIK\n");
    }
    // Mengecek kondisi mirip
    else if (len1 == len2) {
        printf("MIRIP\n");
    }
    // Jika panjang berbeda
    else {
        printf("BERBEDA\n");
    }

    return 0;
}