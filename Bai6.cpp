#include<stdio.h>
#include<string.h>

int main(){
	char S[10][100];
	
	for(int i=0;i<10;i++){
		printf("Nhap chuoi thu %d : ",i+1);
		scanf("%s",S[i]);
	}
	char Y[100];
	strcpy(Y,S[0]);
	
	for(int i=0;i<10;i++){
		if(strcmp(Y,S[i])>0){
			strcpy(Y,S[i]);
		}
	}
	printf("Chuoi dung dau day anphabet la : %s",Y);
}
