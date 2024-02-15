
#include <stdio.h>

void kabarcikSiralama(int dizi[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (dizi[j] > dizi[j+1]) {
                // Swap işlemi
                temp = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = temp;
            }
        }
    }
}

int main() {
    int dizi[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(dizi) / sizeof(dizi[0]);

    printf("Sıralanmamış dizi: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }

    // Kabarcık sıralama fonksiyonunu çağır
    kabarcikSiralama(dizi, n);

    printf("\nSıralı dizi: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }

    return 0;
}
