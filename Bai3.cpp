#include<stdio.h>
#include<string.h>

int main(){
	char S1[100],S2[100];
	printf("Nhap chuoi S1 : ");
	scanf("%s",S1);
	printf("Nhap chuoi S2 : ");
	scanf("%s",S2);
	
	if(strcmp(S1,S2)==0){
		printf("Hai chuoi giong nhau .");
	}
	if(strcmp(S1,S2)>0){
		printf("Chuoi '%s' dung truoc chuoi '%s'",S2,S1);
	}
	if(strcmp(S1,S2)<0){
		printf("Chuoi '%s' dung truoc chuoi '%s'",S1,S2);
	}
}
