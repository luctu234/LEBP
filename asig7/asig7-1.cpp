#include <stdio.h>

int main (){
	int n;
	printf ("Nhap n=\n");
	scanf ("%d",&n);
	int ary[n];
	for (int i = 0; i < n; i++){
		printf ("Nhap pt thu %d:\n",i);
		scanf ("%d",ary[i]);
	    for (int j = 0; j < i; j++){
		    for (int g = 0; g < i - j; g++ ){
			    if (ary[g] > ary[g+1]){
				    int s = ary[g];
				    ary[g] = ary [g+1];
				    ary[g+1] = s;
				
			}
		}
	}
};
	printf ("Sau khi nhap xong:\n");
	for (int i = 0; i < n; i++){
		printf ("%d\t",ary[i]);
	}
}
