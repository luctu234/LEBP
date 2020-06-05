#include <stdio.h>
#include <math.h>
int giaipt (float a, float b , float c, float &x1, float &x2){
     float delta = b*b - 4*a*c;
     if(delta<0){
 
     x1=x2=0*0;
     return 0;
    	}
    else if (delta==0){

 x1=x2= -b/(2*a);
         return 1;
    }
    else{
    	delta = sqrt(delta);
    	x1= (-b+ delta)/(2*a);
    	x2= (-b- delta)/(2*a);
    	return 2;
    	
	}	
}
int main (){
    float a,b,c;
	float x1,x2;
	do{
       printf("nhap a (a!=0):");
	   scanf("%f",&a);
	   printf("nhap b :");
	   scanf("%f",&b) ;
	   printf("nhap c :");
	   scanf("%f",&c);
    }
    while(!a);// A = 0 nhap lai
    int numNo = giaipt (a,b,c,x1,x2);
        if(numNo == 0){
		printf("phuong trinh vo nghiem");
    }
    else if (numNo == 1){
	    printf("phuong trinh da cho co nghiem kep x=%.4f",x1);
    }
    else{
        printf("phuong trinh da cho co 2 nghiem phan biet\nx1=%.4f, \ nx2=%.4f, x1 , x2");
    }
}
        
