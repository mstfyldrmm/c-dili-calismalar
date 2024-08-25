#include <stdio.h>
#include <stdlib.h>

int toplam (int (sayi1), int (sayi2))
{
	return sayi1 + sayi2 ;
}

int main() {
	/* Fonksiyon tanýmý þu þekilde yapýlýr
	
	dönüþ tipi(int, float, double....) fonksiyonadi(parametreler)
	{
	....
	....
	dönüþ deðeri (varsa) 
    }
	*/
	int sayi1, sayi2;
	
	printf("Bir sayi giriniz:");
	
	scanf("%d",&sayi1);
	
	printf("Bir sayi giriniz:");
	
	scanf("%d",&sayi2);
	
    printf("Bu sayilarin toplami : %d",toplam(sayi1, sayi2));
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
