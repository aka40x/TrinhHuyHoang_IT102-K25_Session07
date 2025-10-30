#include<stdio.h>
int main(){
	//1. Khoi tao 2 bien a va b
	//2. Cho nguoi dung nhap vao gia tri cua a, b
	/*3. Su dung vong lap for duyet tu a -> b, tam goi so tai lan lap la i
		Moi lan duyet kiem tra xem so do co phai la so nguyen to khong?
			int isPrime = 1 ; 
		tao vong lap for duyet tu 2 -> <i, tam goi la j
			ben trong chung ta kiem tra neu i % j -> Cap nhat lai isPrime = 0
		kiem tra xem isPrime == 1 ? -> in ra i
		*/	
/*
	Ky thuat dat co (flag)
	flag co 2 gia tri:
		-Gtri 1--> trang thai 1
		-Gtri 2--> trang thai 2
	su dung cac trang thai cua flag de xu ly logicdad
*/
	int a,b;
	printf("Nhap vao a, b: ");
	scanf("%d %d",&a,&b);
	printf("Cac so nguyen to nam trong khoang %d -> %d la: \n",a,b);
	for(int i = a; i<=b;i++){
		if(i<2){
			continue;
		}
		int isPrime = 1;
		for(int j = 2; j<i;j++){
			if(i%j==0){
				isPrime = 0;
				break;
			}
		}
		if(isPrime ==1){
			printf("%d, ",i);
		}	
	}
	return 0;
}
