#include <stdio.h>

int main() {
    unsigned long long n;
    printf("Nhap mot so nguyen duong: ");
    if (scanf("%llu", &n) != 1) return 1;
    if (n == 0) {
        printf("0 la so doi xung\n");
        return 0;
    }

    unsigned long long original = n, reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    if (reversed == original)
        printf("%llu la so doi xung\n", original);
    else
        printf("%llu khong phai la so doi xung\n", original);

    return 0;
}

