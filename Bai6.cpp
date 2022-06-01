#include<stdio.h>
#include<string.h>

int main(){
	char S[10][100];
	
	for(int i=0;i<10;i++){
		printf("Nhap chuoi thu %d : ",i+1);
		scanf("%s",S[i]);
	}
	
	printf("%s",S[0]);
	
	for(int i=0;i<10;i++){
		if(strcmp(S[i],S[i+1])>0){
			S[i+1]=S[i];
		}
	}
	printf("%s",S[9]);
}
