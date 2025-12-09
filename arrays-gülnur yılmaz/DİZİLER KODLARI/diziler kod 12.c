#include <stdio.h>

int main() {
    int dizi[] = {-3, 5, -1, 7, -8, 2, 11, -25};
    int n = 8;
    int pozitif = 0;

    for (int i = 0; i < n; i++) {
        if (dizi[i] > 0) {
            pozitif++;
        }
    }

    printf("Pozitif eleman sayısı: %d\n", pozitif);
    return 0;
}
