#include <stdio.h>

int main() {
    int a[] = {4, 8, 1, 11, 2};
    int n = 5;
    int max = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }    

    printf("En buyuk eleman: %d", max);
    return 0;
}
