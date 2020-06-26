#include <stdio.h>
#include <string.h>

int main(){
    char s[50],ch;
	printf("Nhap chuoi:\n");
	scanf("%s",s);
	printf ("Nhap ky tu can tra:\n");
	scanf("%c",&ch);
	int i;
	for(int i=0;i<strlen(s);i++){
		if(s[i]==ch){
			printf ("%c nam trong chuoi %s",ch,s);
			break;
		}
	}
	if (i>=strlen(s)){
	printf ("%c khong nam trong chuoi %s ",ch,s);
    }
}
