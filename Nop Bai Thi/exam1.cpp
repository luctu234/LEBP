#include <stdio.h>

int main (){
	int n;
	printf ("Nhap So Mang :\n");
	scanf ("%d",&n);
	int ary[n];
	for (int i=0;i<n;i++){
		printf ("Nhap Mang Thu %d:\n",i);
		scanf ("%d",&ary[i]);
	}
	for (int i=0;i<n;i++){
	 	if (ary[i] %2 == 0){
	 		printf ("So Chan Cuoi Cung la :%d",ary[i]);
		
		}
	}
	
}
