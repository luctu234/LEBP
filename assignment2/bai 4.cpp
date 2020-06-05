#include<iostream>
#include<cmath>
using namespace std;
float chuvi (int a, int b, int c) {
      return a + b + c;
}
float dientich (int a, int b, int c){ 
    float p = chuvi(a , b , c) / 2.0;
    return sqrt(p*(p - a)*(p - b)*(p - c));
}
int main (){
    float a, b, c;
	cout << "nhap canh a :";
    cin  >> a;
    cout << "nhap canh b :";
    cin  >> b;
	cout << "nhap canh c :";
	cin  >> c;
	if (a >= b + c||b >= a + c||c >= a + b)
	    cout << "ba canh vua nhap khong phai la canh cua tam giac";
	else {
        cout << "chu vi cua tam giac la:"<<chuvi(a, b, c);
        cout << "dien tich tam giac la:"<<dientich(a, b, c);
    }
    system("pause");
    return 0;
}
    

