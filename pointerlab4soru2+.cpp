#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {

	int *sayi,boyut;
	
	scanf("%d",&boyut);
	
	sayi = (int *) malloc(sizeof(int)*boyut);
	
	int i,tut;
	
	for(i=0 ; i<boyut; i++){
		scanf("%d",&tut);
		*(sayi+i)=tut;
		
	}
	
	printf("Yeni Alan Giriniz :");
	scanf("%d",&tut);
	boyut+=tut;
	sayi = (int *) realloc(sayi,sizeof(int)*boyut);
	
	
	for(i=i; i<boyut; i++){
		scanf("%d",&tut);
		*(sayi+i)=tut;
	}
	
	for(i=0;i<boyut;i++){
		printf("%d \n",*(sayi+i));
		
	}
	


}
