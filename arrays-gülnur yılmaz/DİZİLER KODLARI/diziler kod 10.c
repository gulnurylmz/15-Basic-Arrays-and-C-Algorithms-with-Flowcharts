#include <stdio.h>

int main() {
    int dizi[] = {20, 30, 40, 50, 60};
    int n = 5;
    int toplam = 0;

    for (int i = 0; i < n; i++) {
        toplam += dizi[i];
    }

    float ortalama = (float)toplam / n;

    printf("Dizinin ortalaması: %.2f\n", ortalama);
    return 0;
}
