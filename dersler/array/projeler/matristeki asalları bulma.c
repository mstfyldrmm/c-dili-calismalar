#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int satir, sutun, i, j, z, toplam = 0;
	
	printf("Satir sayisini giriniz:");
	
	scanf("%d",&satir);
	
	printf("Sutun sayisini giriniz:");
	
	scanf("%d",&sutun);
	
	int matris[satir][sutun];
	
	for (i = 0; i < satir; i++)
	{
		for (j = 0; j < sutun; j++)
		{
		   matris[i][j] = rand() % 10;
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
	
	for (i = 0; i < satir; i++)
	{
		for (j = 0; j < sutun; j++)
		{
			if (matris[i][j] != 0)
			{
				z = 2;
				while  (z < matris[i][j])
				{
					if (matris[i][j] % z == 0 && matris[i][j] != 1)
					{
						
						break;
					}
					else
					{
						toplam += matris[i][j];
						
						printf("%d\n",matris[i][j]);
						
						break;
						
					}
					
					z ++;
				}
			
			}
		}
		
	}
	printf("\nMatristeki asal elamanlarin toplami : %d",toplam);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
