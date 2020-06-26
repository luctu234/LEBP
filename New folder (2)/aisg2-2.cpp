#include <stdio.h>

int main (){
	int a,b,c;
	printf ("Nhap a =\n");
	scanf ("%d", &a);
	printf ("Nhap b =\n");
	scanf ("%d", &b);
	printf ("Nhap c =\n");
	scanf ("%d", &c);
 
    if (a < b && b < c){
    	printf ("Min : %d", &a);
    	
	}
	if (b < c && c < a){
		printf ("Min : %d", &b);
    }
	if (c < b && b < a){
		printf ("Min : %d", &b);  
	}	
	}

