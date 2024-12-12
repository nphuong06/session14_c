#include<stdio.h>
#include<string.h>
int main(){
	char text[500];
	int count = 0;
	printf("Nhap chuoi: ");
	fgets(text, 500, stdin);
	int length = strlen(text);
	if(text[length - 1] == '\n'){
		text[length - 1] = '\0';
		length--;
	}
	for(int i = 0; i < length; i++){
		if(text[i] >= 'a' && text[i] <= 'z' || text[i] == 'A' && text[i] == 'Z'){
			count++;
		}
	}
	printf("\nSo ki tu la chu cai la: %d", count);
}
