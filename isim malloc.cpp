#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main( )
{
	
	char *isim,isiml[20];
	isim=(char*)malloc(sizeof(char)*20);


	strcpy(isim,"kerim mert ay");
	printf("%s",isim);
    return 0;
}

