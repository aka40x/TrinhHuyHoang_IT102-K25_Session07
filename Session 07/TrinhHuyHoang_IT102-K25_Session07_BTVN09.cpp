#include<stdio.h>
#include<math.h>
	//1. Khai bao bien
	//2. Cho nguoi dung nhap vao gia tri n
	/*2. Di tim cac cap so thoa man a^3 + b^3 = n va a, b >=0
		- Tao 2 vong lap for
			+ Vong lap for 1 thi chung ta khoi tao a = 0; dieu kien a^3 <= n; a++
				+ Vong lap for 2 thi chung ta khoi tao b = 0; dieu kien b^3 <= n; b++
				-> Neu a^3 + b^3 == n -> in ra a va b
		*/
int main(){
	int n;
	printf("Nhap vao n: ");
	scanf("%d",&n);
	fflush(stdin);
	for(int a = 0; a*a*a<=n; a++){
		for(int b=0;b*b*b<=n;b++){
			if(pow(a,3)+pow(b,3)==n){
				printf("(%d,%d)\n",a,b);
			}
		}
	}
	return 0;
}
