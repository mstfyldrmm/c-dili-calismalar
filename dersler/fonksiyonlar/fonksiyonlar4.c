#include <stdio.h>
#include <stdlib.h>

//Fonksiyonlarda �ok boyutlu dizileri arguman olarak kullanmak

//�nemli fonksiyon tan�mlarken kesinlikler dizi[][i] i yi belirtmemiz gerekir

// �rne�in fonk adi(int,float..matris[j][i], int,float...j) olmal�

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
