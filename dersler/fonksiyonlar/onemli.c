#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	
void hatabas(int number);
	

int main() {
	
    //                                 Fonksiyonlar
	
	/* C programlamada fonksiyon tan�mlamak nas�l olur?
	
	Donustipi(int, float....) fonksiyon adi(aldi�i parametreler)
	
	1-E�er bir fonksiyon bir de�er donmeyecekse, yani bir tek�m i�lemler yap�ld�ktan sonra bir ��kt� elde edilmiyorsa void kullan�l�r
	
	2-E�er fonksiyon parametre alm�yor ise �u �ekilde yap�lmal�d�r---> fonksiyon_adi(void) �rn; toplam(void)
	
	3-Fonksiyonlar genelde main �zerinde tan�mlan�r ama baz� durumlarda tasla�� main �zerinde olup ana hatt� main i�inde veya 
	
	alt�nda olabilir*/
	
	int sayi;
	
	printf("Bir sayi giriniz : ");
	
	scanf("%d",&sayi);
	
	void hatabas(int number) {
		
		printf("Hata kodu %d", number);
		
	}
	
	
	if(sayi >= 0) {
		
		printf("Hata bulunamadi");
	
	}
	
	else {
		
		hatabas(404);
		
		
	}
	

	return 0;
}
	/*hata bas fonksiyonunu buraya tan�mlayabiliriz
	
	su sekilde;
	void hatabas(int number) {
		
		printf("Hata kodu %d", number);
		
	}
	*/
	
	
	
	
	

