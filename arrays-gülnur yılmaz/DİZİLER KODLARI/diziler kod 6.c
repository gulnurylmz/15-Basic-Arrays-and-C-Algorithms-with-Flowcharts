#include <stdio.h>

int main() {
    int dizi[] = {1, 3, 7, 10, 16};
    int n = 5;
    int aranan = 7;
    int bulundu = 0;

    for (int i = 0; i < n; i++) {
        if (dizi[i] == aranan) {
            bulundu = 1;
            break;
        }
    }

    if (bulundu)
        printf("Eleman bulundu.\n");
    else
        printf("Eleman yok.\n");

    return 0;
}
