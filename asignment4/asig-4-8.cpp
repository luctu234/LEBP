#include <stdio.h>
#include <string.h>

int main(){
	int n;
	printf ("Nhap n=\n");
	scanf ("%d",&n);
	char ary[n][50];
	for (int i=0;i<n;i++){
		printf ("nhap chuoi thu %d:\n",i);
		scanf ("%s",ary[i]);
	}
	for (int i=0;i<n-1;i++){
		for (int j=0;j<n-1-i;j++){
	    	if (strcmp(ary[j],ary[j+1]) > 0){
	    		char tmp[50];
		   	    strcpy(tmp,ary[j]);
		      	strcpy(ary[j],ary[j+1]);
			  	strcpy(ary[j+1],tmp);
           }
		}
	}	
    printf ("Sau khi sap xep:\n");
    for(int i=0;i<n;i++){
    	printf ("%s\n",ary[i]);
	}
}
