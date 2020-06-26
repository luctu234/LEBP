#include <stdio.h>

int main (){
	int n,n2;
	printf ("Nhap so tien hien co :\n");
	scanf ("%d",&n);
	printf ("Nhap so tien muon co :\n");
	scanf ("%d",&n2);
	int i = 0;
	while (n < n2){
		n += n*8/100;
		i++;
	}
	printf ("se can gui trong %d\n nam ",i);
}
