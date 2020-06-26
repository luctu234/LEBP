#include <stdio.h>
#include <iostream>

using namespace std;
int main (){
	int n;
	cout << "Nhap n" << n;
	cin >> n;
	cout << "Tat ca nhung so chan nho hon" << n << "la :";
	for (int i = 0; i < n; i++){
		if (i % 2 == 0){
			cout << " " << i;
		}
	}
	return 0;
}

