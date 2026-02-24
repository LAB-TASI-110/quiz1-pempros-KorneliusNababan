#include <stdio.h>

int main() {
    char nim[15], nama[50], prodi[50], tanggal[20];
    float berat;

    // Input berurutan
    scanf("%s", nim); getchar();
    scanf("%[^\n]", nama); getchar();
    scanf("%[^\n]", prodi); getchar();
    scanf("%f", &berat); getchar();
    scanf("%[^\n]", tanggal);

    // Output sesuai permintaan
    printf("\nNIM: %s\n", nim);
    printf("Nama: %s\n", nama);
    printf("Prodi: %s\n", prodi);
    printf("Berat Laundry: %.1f kg\n", berat);
    printf("Tanggal Diberikan: %s\n", tanggal);

    return 0;
}
