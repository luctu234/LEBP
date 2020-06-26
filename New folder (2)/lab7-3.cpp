#include <stdio.h>

int main (){
	int n;
	printf ("Nhap phan tu trong mang =\n");
	scanf ("%d",&n);
	int ary[n];
	for (int i = 0; i < n; i++){
		printf ("Nhap pt thu %d:\n",i);
		scanf ("%d",&ary[i]);
	}
	printf("Nhung SNT trong mang:\n");
	for (int i = 0; i < n; i++){
		
		if (ary[i] < 2) continue;
		if (ary[i] <= 3) {
			printf ("%d\t",ary[i]);
			continue;
		} 
	    int count = 0;
	    for (int j = 2; j <= ary[i]/2; j++){
		    if (ary[i] % j == 0){
			    count ++;
			    break;
		}
	}
	    if (count == 0){
		    printf ("%d\t",ary[i]);
	   }
    }
}
