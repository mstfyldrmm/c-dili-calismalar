#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
//Random degerlerle olusturulacak 10�10�luk matrisi �nce yazd�ran ve program i�erisinde bu i�lemi yaparken ka� kere de�i�tirme i�lemi yap�ld���n�,en b�y�k rakam� ve ka� tane oldu�unu ekrana yazd�ran program kodunu yaz�n�z.
	
	int satir, sutun, i, j, adet, buyuk;
	
	printf("Satir sayisini giriniz:");
	
	scanf("%d",&satir);
	
	printf("Sutun sayisini giriniz:");
	
	scanf("%d",&sutun);
	
	int matris[satir][sutun];
	
	for (i = 0; i < satir; i++)
	{
		for (j = 0; j < sutun; j++ )
		{
			matris[i][j] = rand() % 10;
		}
	}
	
		
	for (i = 0; i < satir; i++)
	{
		for (j = 0; j < sutun; j++ )
		{
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	
	for (i = 0; i < satir; i++)
	{
		for (j = 0; j < sutun; j++ )
		{
			if (matris[i][j] > buyuk)
			{
				buyuk = matris[i][j];
				printf("%d\n",buyuk);
			}
		}
		
	}
	
	for (i = 0; i < satir; i++)
	{
		for (j = 0; j < sutun; j++)
		{
			if (matris[i][j] == buyuk)
			{
				adet ++;
				printf("%d",adet);
			}
		}
		
	}

	
	printf("Max eleman : %d ve tekrar sayisi : %d", buyuk, adet);
	
	
	
	
	
	
	
	
	
	return 0;
}
