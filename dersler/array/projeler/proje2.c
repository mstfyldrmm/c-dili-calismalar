#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i, toplam = 0, ust, alt;
	
	float dizi[10], ortalama;
	
	for (i = 0; i < 10; i++)
	{
		printf("Bir sayi giriniz:");
		
		scanf("%f",&dizi[i]);
		
		toplam += dizi[i];
	}
	
	ortalama = toplam / 10.0;
	
	printf("\nSayilarin ortalamasi : %3.f\n",ortalama);
	
	for (i = 0; i < 10; i++)
	{
		if (dizi[i] > ortalama)
		{
			ust ++;
		}
		else if(dizi[i] < ortalama)
		{
			alt ++;
		}
	}
	
	printf("\n%d kadar eleman ortalamanin altinda %d kadar eleman ortalamanin ustunde kalmistir", alt, ust);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
