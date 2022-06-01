#include<stdio.h>
#include<string.h>

int main(){
	char S[10][100];
	
	for(int i=0;i<10;i++){
		printf("Nhap chuoi thu %d : ",i+1);
		scanf("%s",S[i]);
	}
	
	for(int i=0;i<10;i++){
		printf("Chuoi vua nhap la :  %s\n",S[i]);
	}
}
