#include <stdio.h>

int main() {
    int dizi[] = {20, 30, 40, 50, 60};
    int n = 5;

    int ilk = dizi[0];
    int son = dizi[n-1];
    int toplam = ilk + son;

    printf("İlk eleman: %d\n", ilk);
    printf("Son eleman: %d\n", son);
    printf("İlk ve son elemanın toplamı: %d\n", toplam);

    return 0;
}
