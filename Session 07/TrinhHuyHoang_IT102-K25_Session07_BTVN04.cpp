#include <stdio.h>

int main() {
    int m, n;
    printf("Nhap chieu dai m: ");
    scanf("%d", &m);
    printf("Nhap chieu rong n: ");
    scanf("%d", &n);

    if (m <= 0 || n <= 0) {
        printf("Gia tri m va n phai la so nguyen duong.\n");
        return 1;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}

