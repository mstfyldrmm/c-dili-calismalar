#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void hatayibas(int(hata))
{
	printf("Hata kodu :%d",hata);
}




int main() {
	
	
	/*                      FONKS�YONLAR
	
	Fonksiyon Tan�mlama
	
	Donus Tipi fonksiyonadi(Parametreler) ve parametreler , ile ayr�l�r
	{
	....
	....
    } */
    // e�er bir fonksiyon bir de�er d�nmeyecekse yani �e�itli i�lemler yap�p bir ��kt� elde etmiyorsa void fonksiyonu kullan�l�r
    // e�er parametre yoksa void ile belirtilir �rn: toplam(void) gibi
    
	
	int  sayi;
	
	printf("Lutfen negatif olmayan bir tamsayi giriniz:");
	
	scanf("%d",&sayi);
	
	if (sayi >= 0)
	{
		printf("Bravo dogru tusladiniz");
	}
	else
	{
		hatayibas(404);
	}
	
	
	
	
	
	return 0;
}
