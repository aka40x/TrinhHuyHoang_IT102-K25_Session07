#include<stdio.h>
int main(){
	//1. Khoi tao 3 bien count = 0, n, x
	//2. Cho nguoi dung nhap vao gia tri cua 2 bien n va x
	//3. Dung vong lap While phan tach tung chu so cua moi hang roi so sanh voi x -> neu chu so do == x -> tang bien count len 1
	//4. In ra ket qua 
	int n, x, count = 0;
	printf("Nhap vao n: ");
	scanf("%d",&n);
	printf("Nhap vao x: ");
	scanf("%d",&x);
	while (n>0){
		int i = n%10;
		if(i==x){
			count++;
		}
		n /= 10;
	}
	printf("Vay so lan %d xuat hien trong n la: %d",x,count);
	return 0;
}
