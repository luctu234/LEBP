#include <stdio.h>

int main(){
	int n,x = 0;
	printf ("Nhap n:\n");
	scanf ("%d",&n);
	if (n > 0 && n <= 9999){
		x = x*10 + n%10;
		n /=10;
		if (n!=0){
			x = x*10 + n%10;
			n /= 10;
			if (n!= 0){
				x = x*10 + n%10;
				n /= 10;
				if (n!= 0){
				    x = x*10 + n%10;
				    n /= 10;
			   }
			}
		}
	printf ("Ngich dao:%d\n",x);
   }else{
	printf ("Dung chuong trinh");
}
}

	
