#include <stdio.h>

int main() {
    int dizi[] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    for (int i = 0; i < n/2; i++) {
        int temp = dizi[i];
        dizi[i] = dizi[n-1-i];
        dizi[n-1-i] = temp;
    }

    printf("Ters çevrilmiş dizi: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }

    return 0;
}
