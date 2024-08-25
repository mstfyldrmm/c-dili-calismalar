#include <stdio.h>
#include <stdlib.h>

//Fonksiyonlarda çok boyutlu dizileri arguman olarak kullanmak

//Önemli fonksiyon tanýmlarken kesinlikler dizi[][i] i yi belirtmemiz gerekir

// örneðin fonk adi(int,float..matris[j][i], int,float...j) olmalý

void yazdir(int matris[][3], int size)
{
	int i, j;
	
	for(i = 0; i < size; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d",matris[i][j]);
		}
		printf("%d");
	}
}


int main() {
	
	int dizi[3][3], i, j;
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			scanf("%d",&dizi[i][j]);
		}
	}
	
	yazdir(dizi, 3);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
