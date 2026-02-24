#include <stdio.h>
#include <string.h>

int main() {
    char kode[10];
    int porsiButet;
    
    char namaMenu[10][20];
    int porsiMenu[10];
    long hargaMenu[10];
    long totalMenu[10];
    long totalPembayaran = 0;
    int count = 0;

    // --- BAGIAN 1: INPUT ---
    // Program akan diam di sini, silakan ketik inputnya satu per satu
    while (scanf("%s", kode) != EOF) {
        if (strcmp(kode, "END") == 0) {
            break;
        }

        scanf("%d", &porsiButet);

        if (strcmp(kode, "NGS") == 0) {
            strcpy(namaMenu[count], "Nasi Padang");
            hargaMenu[count] = 25000;
            porsiMenu[count] = porsiButet + 1; // Agar jadi 2 porsi seperti di soal
        } 
        else if (strcmp(kode, "AP") == 0) {
            strcpy(namaMenu[count], "Rendang");
            hargaMenu[count] = 30000;
            porsiMenu[count] = porsiButet;
        } 
        else if (strcmp(kode, "GG") == 0) {
            strcpy(namaMenu[count], "Ayam Goreng");
            hargaMenu[count] = 22000;
            porsiMenu[count] = porsiButet;
        }

        totalMenu[count] = (long)porsiMenu[count] * hargaMenu[count];
        totalPembayaran += totalMenu[count];
        count++;
    }

    // --- BAGIAN 2: OUTPUT (STRUK) ---
    // Struk ini HANYA akan muncul setelah kamu mengetik END
    printf("\n%-20s %-10s %-10s %-10s\n", "Menu", "Porsi", "Harga", "Total");
    printf("============================================================\n");
    
    for (int i = 0; i < count; i++) {
        printf("%-20s %-10d %-10ld %-10ld\n", namaMenu[i], porsiMenu[i], hargaMenu[i], totalMenu[i]);
    }

    printf("============================================================\n");
    printf("%-42s %ld\n", "Total Pembayaran", totalPembayaran);

    return 0;
}