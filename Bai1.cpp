#include<stdio.h>
#include<string.h>

int main(){
	char S1[100],S2[100];
	printf("Nhap chuoi S1 : ");
	scanf("%s",S1);
	printf("Nhap chuoi S2 : ");
	scanf("%s",S2);
	
	if(strlen(S1)>strlen(S2)){
		printf("Chuoi S1 dai hon S2");
	}
	else{
		printf("Chuoi S2 dai hon S1");
	}
}
