#include <stdio.h>
#include <stdlib.h>
void ReverseText(char * tPtr)
{
	int boy=strlen(tPtr);
	int i = boy-1;
	
	while(i>=0)
	{
		printf("%c",tPtr[i]);
		i--;
	}
}



int main() {
	char metin[100];
	
	printf("Cumle girin:");
	gets(metin);
	
	ReverseText(metin);
	
	return 0;
}
