#include <stdio.h>

float ave(int ary[],int n);
    int s = 0;
	for (int i=0;i<n;i++){
 		s += ary[i];
 		s  = (float)s/n;	 
 	}
int main(){
	int n;
	printf ("Nhap so mang:\n");
	scanf ("%d",&n);
	int ary[n];
	for (int i=0;i<n;i++){
		printf ("Nhap mang thu %d:\n",i);
		scanf ("%d",&ary[i]);
	}
	printf ("Trung binh cong cua mang la %f",ave(ary[n],n));
}

