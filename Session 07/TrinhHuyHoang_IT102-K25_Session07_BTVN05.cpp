#include <iostream>
#include <math.h>

int main() {
    int n;
    printf("Nhap mot so nguyen n: ");
    scanf("%d",&n);
    int tmp = n;
    int sum = 0;

    // kiem tra do dai 
    int digits = 0;
    int x = n;
    while (x > 0) {
        digits++;
        x /= 10;
    }

    // Tính tinh tong cac chu so
    while (tmp > 0) {
        int digit = tmp % 10;
        sum += pow(digit, digits);
        tmp /= 10;
	}
	if (sum == n){
        printf("La so armstrong");
    }else{
       printf("Khong phai la so armstrong");
	}
	return 0;
}
