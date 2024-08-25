#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void hatayibas(int(hata))
{
	printf("Hata kodu :%d",hata);
}




int main() {
	
	
	/*                      FONKSÝYONLAR
	
	Fonksiyon Tanýmlama
	
	Donus Tipi fonksiyonadi(Parametreler) ve parametreler , ile ayrýlýr
	{
	....
	....
    } */
    // eðer bir fonksiyon bir deðer dönmeyecekse yani çeþitli iþlemler yapýp bir çýktý elde etmiyorsa void fonksiyonu kullanýlýr
    // eðer parametre yoksa void ile belirtilir örn: toplam(void) gibi
    
	
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
