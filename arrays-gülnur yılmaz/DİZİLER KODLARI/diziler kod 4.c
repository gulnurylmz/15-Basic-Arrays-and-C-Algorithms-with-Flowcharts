#include <stdio.h>

int main() {
    int dizi[] = {16, 7, 8, 22, 3, 11};
    int n = 6;  // dizideki eleman sayısı
    int min = dizi[0];  // ilk elemanı başlangıç olarak al

    for (int i = 1; i < n; i++) {
        if (dizi[i] < min) {
            min = dizi[i];  // daha küçük eleman bulunduysa güncelle
        }
    }

    printf("En küçük eleman: %d\n", min);
    return 0;
}
