#include <stdio.h>
#include <string.h>

int main() {
    int n, i;
    int nilai[100];
    int totalWilson = 0, totalIndah = 0, totalJulius = 0, totalYohana = 0;

    // 1. Input jumlah total data (N)
    if (scanf("%d", &n) == EOF) return 0;

    // 2. Input deret nilai (n1, n2, ... n)
    for (i = 0; i < n; i++) {
        scanf("%d", &nilai[i]);
    }

    // 3. Menghitung total untuk setiap kelompok berdasarkan pola modulo 4
    for (i = 0; i < n; i++) {
        if (i % 4 == 0) totalWilson += nilai[i]; // Urutan 1, 5, 9...
        else if (i % 4 == 1) totalIndah += nilai[i]; // Urutan 2, 6, 10...
        else if (i % 4 == 2) totalJulius += nilai[i]; // Urutan 3, 7, 11...
        else if (i % 4 == 3) totalYohana += nilai[i]; // Urutan 4, 8, 12...
    }

    // 4. Output Hasil Semua Kelompok
    printf("Wilson: %d\n", totalWilson);
    printf("Indah: %d\n", totalIndah);
    printf("Julius: %d\n", totalJulius);
    printf("Yohana: %d\n", totalYohana);

    return 0;
}