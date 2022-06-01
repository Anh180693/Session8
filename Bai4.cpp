#include<stdio.h>
#include<string.h>

int main(){
	char c[100];
	printf("Nhap chuoi : ");
	scanf("%s",c);
	
	for(int i=0;i<strlen(c)/2;i++){
		int n = c[i];
		c[i] = c[strlen(c)-1-i];
		c[strlen(c)-1-i] = n;
		
	}
	printf("Chuoi sau khi dao nguoc la : %s",c);
}
