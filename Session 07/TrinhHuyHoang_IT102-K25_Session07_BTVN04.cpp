#include <stdio.h>

int main() {
    int m, n;
    printf("Nhap chieu rong m: ");
    scanf("%d", &m);
    printf("Nhap chieu dai n: ");
    scanf("%d", &n);

    if (m <= 0 || n <= 0) {
        printf("Gia tri m va n phai la so nguyen duong.\n");
        return 1;
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}


