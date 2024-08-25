#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int satir, sutun, sayi, i, j;
	
	printf("Matrisin satir sayisi kac olsun : ");
	
	scanf("%d",&satir);
	
	printf("Matrisin sutun sayisi kac olsun : ");
	
	scanf("%d",&sutun);
	
	int matris[satir][sutun];
	
	for (i = 0; i < satir; i++)
	{
		for (j = 0; j < sutun; j++)
		{
			scanf("%d",&matris[i][j]);
		}
	}
	
	for (i = 0; i < satir; i++)
	{
		for (j = 0; j < sutun; j++)
		{
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	

	
	return 0;
}
