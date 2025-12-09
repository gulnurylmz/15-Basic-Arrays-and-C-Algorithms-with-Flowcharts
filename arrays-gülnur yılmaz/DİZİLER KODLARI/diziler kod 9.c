#include <stdio.h>

int main() {
    int dizi[] = {1, 6, 7, 8, 12, 13};
    int n = 6;
    int tek = 0, cift = 0;

    for (int i = 0; i < n; i++) {
        if (dizi[i] % 2 == 0) {
            cift++;
        }    
        else
            tek++;
    
    }

    printf("Tek sayılar: %d\n", tek);
    printf("Cift sayılar: %d\n", cift);

    return 0;
}

