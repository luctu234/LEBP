#include <stdio.h>;

int main (){
	int n,n2;
	printf ("Nhap so tien muon gui :\n");
	scanf ("%d",&n);
	printf ("Nhap so nam muon gui :\n");
	scanf ("%d",&n2);
	n += n2*n*8/100;
	printf ("so tien nhan dc sau tung day nam la %d",n);
}
