#include <stdio.h>

int main() {
    int a[] = {5, 8, 13, 4, 11};
    int n = 5, toplam = 0;

    for (int i = 0; i < n; i++)
        if (a[i] % 2 != 0)
            toplam += a[i];

    printf("Tek sayilar toplami: %d", toplam);
    return 0;
}
