#include <stdio.h>

int main(){
	int n;
	printf ("Nhap n=\n");
	scanf ("%d",&n);
	int ary[n];
	for(int i = 0; i < n; i++){
		printf ("Nhap pt thu %d:\n",i);
		scanf ("%d",&ary[i]);
		
	}
	int x = 0;
	for(int i = 0; i < n; i--){
		   if (ary[i] %2 == 1){
		   	    x = ary[i];
		   	    break;
		   }
	}
	if (x %2 ==0){
		printf ("khong co so le");

	}else{
		printf ("so le cuoi cung : %d",x);
	}
	
}
