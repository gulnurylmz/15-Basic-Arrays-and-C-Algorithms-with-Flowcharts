#include <stdio.h>

int main() {
    int dizi[] = {1, 7, 4, 7, 5, 7, 9, 13};
    int n = 8;
    int aranan = 7;
    int sayac = 0;

    for (int i = 0; i < n; i++) {
        if (dizi[i] == aranan) {
            sayac++;
        }
    }

    printf("%d sayısı dizide %d kez geçiyor.\n", aranan, sayac);
    return 0;
}
