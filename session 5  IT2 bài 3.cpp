#include<stdio.h>
int main(){
	int i=0, n, sum=0;
	printf("Nhap vao 1 so nguyen duong:");
	scanf("%d", &n);
	do{
		sum+=i;
		++i;
	}while(i<=n);
	printf("Tong tu 1 den n la: %d ", sum);
	return 0;
}
