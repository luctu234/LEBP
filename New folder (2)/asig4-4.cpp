#include <stdio.h>

int main (){
	int n;
	printf ("Nhap n=\n");
	scanf ("%d",&n);
	int sum = 0;
	printf ("danh sach cac uoc cua %d la:\n",n);
	for (int i = 1; i <= n; i++){
		if (n % i == 0){
			printf ("%5d",i);
			sum += i;
		}
	}
	printf ("\nTong cac uoc cua n la : %d ",sum);
}
