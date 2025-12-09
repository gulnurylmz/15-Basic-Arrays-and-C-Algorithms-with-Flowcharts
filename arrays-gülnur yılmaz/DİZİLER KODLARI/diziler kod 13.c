#include <stdio.h>

int main() {
    int a[] = {17, 5, 132, 9998};
    int n = 4;

    for (int i = 0; i < n; i++) {
        int x = a[i];
        int sayac = 0;

        if (x == 0) sayac = 1;

        while (x > 0) {
            x /= 10;
            sayac++;
        }

        printf("%d sayisi %d basamakli\n", a[i], sayac);
    }

    return 0;
}
