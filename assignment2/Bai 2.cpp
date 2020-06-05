#include <stdio.h>

int main(){

float a,b,c;
    printf ("nhap a b c:");
    scanf ("%f%f%f",&a, &b, &c);
if (a<=b&&b<=c){
    printf ("a nho nhat");
}else{
if (a>=b&&b>=c){
    printf ("c nho nhat");
}else{
if (a>=b&&b<=c);
    printf ("b nho nhat");
}
}
return 0;
}
