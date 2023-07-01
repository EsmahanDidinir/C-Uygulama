#include <stdio.h>
#include <stdlib.h>
void Ispalindrom(char * tPtr)
{
	int i;
	int flag=0;
	int boy=strlen(tPtr);
	
	for(i=0;i<boy;i++)
	{
		if(tPtr[i]!=tPtr[boy-i-1])
		flag=1;
		break;
	}
	if(flag==1){
		printf("Palindrom degildir.",tPtr[i]);
	}else{
		printf("Palindromdur.",tPtr[i]);
	}
}

int main() {
	char metin[100];
	printf("Metin girin:");
	gets(metin);
	
	Ispalindrom(metin);
	return 0;
}
