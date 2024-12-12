#include<stdio.h>
#include<string.h>
int main(){
	char str[1000];
	int letter = 0;
	printf("Nhap chuoi: ");
	gets(str);
	for(int i = 0; i < strlen(str); i++){
		if(str[i] == ' '){
			letter++;
		}
	}
	printf("\nChuoi ban nhap co %d tu\n", letter+1);
	return 0;
}
