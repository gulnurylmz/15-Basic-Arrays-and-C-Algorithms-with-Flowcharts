#include <stdio.h>

int main() {
    int dizi[] = {2, 3, 7, 12, 16};
    int n = 5;

    for (int i = 0; i < n; i++) {
        dizi[i] = dizi[i] * 2;
    }

    printf("2 ile çarpılmış dizi: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }

    return 0;
}
