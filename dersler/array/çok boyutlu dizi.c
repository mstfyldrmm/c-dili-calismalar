#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int matris[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}}; //Elemanlar 0.sutundan 0.satir ile baslar örn: 0.satýr 0 1 2
	
	printf("3.satir 3.sutun elemani : %d\n",matris[0][2]); 
	
	// Matrisi yazdýrma
    
	int i, j;
	
	for (i = 0; i < 3; i++)
	{
		
		for (j = 0; j < 3; j++)
		{
			printf("%d ",matris[i][j]);
		}
		printf("\n");	
	}
	printf("Kullanicidan alinan verilere gore matris\n\n");
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d.ninci %d.inci eleman:",i ,j);
			scanf("%d",&matris[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ",matris[i][j]);
		}
		printf("\n");
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
