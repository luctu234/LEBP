#include <stdio.h>

int main (){
	int n,s=0,count=0;
	do{
		printf ("nhap 1 so > 1000:\n");
		scanf ("%d",&n);
		count++;
		s = s + n;
	}
	while (n <= 1000);
		printf ("Nguoi dung phai nhap %d moi thanh cong \n",count);
		printf ("gia tri trung binh sau nhung lan nhap la: %f",(float)s/count);
}
