#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main()
{
    int dizi[10];
    int temp;
    int i,j;
    
    for(i = 0; i < 10; i++)
    {
        printf("Dizinin %d. degerini giriniz: ",i+1);
        scanf("%d",&dizi[i]);
    }
    printf("\nDizinin kucukten buyuge dogru siralanmis hali\n");
    
    for( i = 0; i < 9; i++)
    {
        for( j = i+1; j < 10; j++)
        {
            if(dizi[j] < dizi[i]){
                temp = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = temp;
            }
        }
    }
    for( i = 0; i < 10; i++)
    {
        printf("%d\t",dizi[i]);
    }
    
}
