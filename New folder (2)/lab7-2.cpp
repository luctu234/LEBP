#include <stdio.h>

int main (){
	int n;
	printf ("Nhap n:\n");
	scanf ("%d",&n);
	int min = 0;
	if (n < 0) n = -n;
	while (n!=0){
		int sd = n%10;
		if (sd > min);
		   min = sd;
		n/=10;   
	}
	printf ("Chu so nho nhat : %d",min);
}
