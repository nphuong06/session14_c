#include<stdio.h>
#include<string.h>
int main(){
	char str[500], characters, count = 0;
	printf("Nhap chuoi: ");
	gets(str);
	printf("\nNhap ki tu muon dem: ");
	scanf("%c", &characters);
	for(int i = 0; i < strlen(str); i++){
		if(str[i] == characters){
			count++;
		}
	}
	printf("\nKi tu %c xuat hien %d lan", characters, count);
	return 0;
}
