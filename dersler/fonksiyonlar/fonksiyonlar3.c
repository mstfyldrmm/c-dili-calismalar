#include <stdio.h>
#include <stdlib.h>

//Fonksiyonlarda argüman olarak dizilerin kullanýlmasý

int toplam(int dizi[], int size)
{
	int i, toplam = 0;
	
	for(i = 0; i < size; i++)
	{
		toplam += dizi[i];
	}
	
	 return toplam;
}


int main() {
	
	int sayilar[5], i;
	
	for (i = 0; i < 5; i++)
	{
	printf("Bir sayi giriniz:");
	
	scanf("%d",&sayilar[i]);
	
    }
	
	printf("Sayilarin toplami: %d",toplam(sayilar, 5));
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
