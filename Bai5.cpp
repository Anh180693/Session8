#include<stdio.h>
#include<string.h>

int main(){
	char S[10][100];
	
	for(int i=0;i<10;i++){
		printf("Nhap chuoi thu %d : ",i+1);
		scanf("%s",S[i]);
	}
	
	int max = strlen(S[0]);
	for(int i=0;i<10;i++){
		if(strlen(S[i])>max){
			max=strlen(S[i]);
		}
	}
	int n=0;
	for(int i=0;i<10;i++){
		if(max==strlen(S[i])){
			n=i;
			break;
		}		
	}
	printf("Chuoi dai nhat la : %s\n",S[n]);
}
