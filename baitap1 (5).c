#include<stdio.h>
int main(){
	char str[500];
	printf("Nhap chuoi: ");
	fgets(str, 500, stdin);
	printf("%s", str);
	return 0;
}
