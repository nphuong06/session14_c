#include<stdio.h>
#include<string.h>
int main(){
	char str[500];
	printf("Nhap chuoi: ");
	gets(str);
	for(int i = 0; i < strlen(str); i++){
		printf("%c ", str[i]);
	}
	return 0;
}
