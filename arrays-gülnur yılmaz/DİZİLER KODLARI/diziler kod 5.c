#include <stdio.h>

int main() {
    int dizi[] = {4, 9, 7, 3, 16};
    int n = 5;  // dizideki eleman sayısı
    int toplam = 0;

    for (int i = 0; i < n; i++) {
        toplam += dizi[i];  // her elemanı toplama ekle
    }

    printf("Dizinin toplamı: %d\n", toplam);
    return 0;
}
