#include <stdio.h>

int main (){
	int n;
	printf ("Nhap n=\n");
	scanf ("%d",&n);
	int ary[n];
	for (int i = 0; i < n; i++){
		printf ("Nhap phuong trinh thu %d\n",i);
		scanf ("%d", &ary[i]);
	}
	int d = 0,count = 0;
	for (int i = 0; i < n; i++){
		    if (ary[i] > 0){
		    	count ++;
		    	if (count > d){
		    		d = count;
				}
			}
		else{
			count = 0;
		}	
	}
	printf ("So luong so lien tiep nhieu nhat la: %d",d);
}
