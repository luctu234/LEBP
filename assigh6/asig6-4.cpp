#include <stdio.h>

int main(){
	int ary[4] = {2,5,6,1};
	
	for (int i = 0; i < 4 - 1; i++){
		for (int j = 0; j < 4 - 1 - i; j++){
			if (ary[j] > ary[j+1]){
				    int s = ary[i];
				    ary[i] = ary [j+1];
				    ary[j+1] = s;
			}
		}
	}
	printf ("Mang sau khi sap xep:\n");
	for (int i = 0; i < 4; i++){
		    printf ("%d\t",i);
	}
}

