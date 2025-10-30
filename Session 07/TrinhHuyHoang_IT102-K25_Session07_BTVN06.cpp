#include<stdio.h>
int main(){
	int n,i,reverseN;
	printf("Enter n: ");
	scanf("%d", &n);
	while(n>0){
		i = n%10;
		reverseN = reverseN * 10 + i;
		n /= 10;
	}
	printf("So dao nguoc cua %d la: %d",n,reverseN);
}
