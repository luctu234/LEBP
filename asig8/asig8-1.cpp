#include <stdio.h>
#include <stdlib.h>

int main (){
	int n, *ary;
	printf ("Nhap n=\n");
	scanf ("%d",&n);
	ary = (int *)malloc(n*sizeof(int) );
	for(int i = 0; i < n; i++){
		printf ("Nhap pt thu %d:\n",i);
		scanf ("%d",ary+1);
		
	}
	int count = 0, x = 0;
	for (int i = 0; i < n; i++){
		if(*(ary+1)>0){
			count ++;
			if(count>x){
				x = count;
			}
		}else{
			count = 0;
		}
	}
	printf ("So luong so duong nhieu nhat :%d",x);
}
