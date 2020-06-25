#include <stdio.h>

int main(){
	int n;
	printf ("Nhap n=\n");
	scanf ("%d",&n);
	int ary[n];
	for (int i = 0; i < n; i++){
		    printf ("Nhap pt thu %d\n",i);
		    scanf ("%d",&ary[i]);
	}
	int s = 0;
	for (int i = 0; i < n ; i++){
		if (ary[i] > 0){
			   s = ary [i];
			   break;
		}
	}
	if (s > 0){
		    for (int i = 0; i < n; i++){
		        if (ary[i] > 0 && ary[i] < s){
		        	s = ary[i];
		        	
				}	
			}
	        printf ("So duong nho nhat : %d",s);		
	}
	else{
		    printf ("Mang nay ko co so duong");
	}
	
	
}
